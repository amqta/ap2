#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
7. Faça um programa para excluir os alunos que foram reprovados, sabendo que para serão
reprovados se a média aritmética for menor do que 6,0.
*/

typedef struct
{
    char nome[50], curso[100];
    int matricula;
    float nota1, nota2;
} Aluno;

int lerProximoAluno(FILE *arquivo, Aluno *aluno);
void escreverAluno(FILE *arquivo, Aluno aluno);
void aprovadoOuNada(FILE *arquivo, Aluno aluno); // calcula as médias e printa só aquelas que estão acima de 6,0

int main()
{
    Aluno aluno;

    FILE *DATA = fopen("ALUNOS.DAT", "r");
    if (DATA == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    FILE *TEMP_DATA = fopen("TEMP_ALUNOS.DAT", "w");
    if (TEMP_DATA == NULL)
    {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    while (lerProximoAluno(DATA, &aluno))
    {
        aprovadoOuNada(TEMP_DATA, aluno);
    }
    fclose(TEMP_DATA);
    fclose(DATA);

    remove("ALUNOS.DAT");
    rename("TEMP_ALUNOS.DAT", "ALUNOS.DAT");

    printf("Alunos aprovados registrados com sucesso.\n");
    return 0;
}

int lerProximoAluno(FILE *arquivo, Aluno *aluno)
{
    char linha[256];

    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        if (strstr(linha, "Aluno") != NULL)
        {
            if (fgets(linha, sizeof(linha), arquivo) == NULL)
                return 0;
            sscanf(linha, "Matrícula: %d", &aluno->matricula);

            if (fgets(linha, sizeof(linha), arquivo) == NULL)
                return 0;
            sscanf(linha, "Nome: %[^\n]", aluno->nome);

            if (fgets(linha, sizeof(linha), arquivo) == NULL)
                return 0;
            sscanf(linha, "Curso: %[^\n]", aluno->curso);

            if (fgets(linha, sizeof(linha), arquivo) == NULL)
                return 0;
            sscanf(linha, "Nota 1: %f", &aluno->nota1);

            if (fgets(linha, sizeof(linha), arquivo) == NULL)
                return 0;
            sscanf(linha, "Nota 2: %f", &aluno->nota2);

            return 1;
        }
    }
    return 0;
}

void escreverAluno(FILE *arquivo, Aluno aluno)
{
    fprintf(arquivo, "\n--- Aluno ---\n");
    fprintf(arquivo, "Matrícula: %d\n", aluno.matricula);
    fprintf(arquivo, "Nome: %s\n", aluno.nome);
    fprintf(arquivo, "Curso: %s\n", aluno.curso);
    fprintf(arquivo, "Nota 1: %.1f\n", aluno.nota1);
    fprintf(arquivo, "Nota 2: %.1f\n", aluno.nota2);
}

void aprovadoOuNada(FILE *arquivo, Aluno aluno)
{
    float media = (aluno.nota1 + aluno.nota2) / 2;
    if (media >= 6.0)
    {
        escreverAluno(arquivo, aluno);
    }
}