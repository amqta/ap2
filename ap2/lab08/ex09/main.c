#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
9. Faça um programa para consultar todos os alunos cujos nomes começam pela letra M.
*/

typedef struct
{
    char nome[50], curso[100];
    int matricula;
    float nota1, nota2;
} Aluno;

int lerProximoAluno(FILE *arquivo, Aluno *aluno);
void escreverAluno(Aluno aluno);

int main()
{
    Aluno aluno;
    FILE *DATA = fopen("ALUNOS.DAT", "r");
    if (DATA == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    while (lerProximoAluno(DATA, &aluno))
    {
        if (aluno.nome[0] == 'M' || aluno.nome[0] == 'm')
        {
            escreverAluno(aluno);
        }
        }
    fclose(DATA);
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
void escreverAluno(Aluno aluno)
{
    printf("\n--- Aluno ---\n");
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome);
    printf("Curso: %s\n", aluno.curso);
    printf("Nota 1: %.1f\n", aluno.nota1);
    printf("Nota 2: %.1f\n", aluno.nota2);
}
