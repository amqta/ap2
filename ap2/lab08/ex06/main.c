#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
6. Faça um programa para alterar o curso dos alunos do arquivo criado no Exercício 3.
*/

typedef struct
{
    char nome[50], curso[100];
    int matricula;
    float nota1, nota2;
} Aluno;

int matriculaExiste(int matricula);
int lerProximoAluno(FILE *arquivo, Aluno *aluno);
void escreverAluno(FILE *arquivo, Aluno aluno);

int main()
{
    Aluno aluno;
    char novoCurso[100];
    int matriculaTarget;
    char c;
    printf("Insira a matrícula que terá o curso alterado: ");
    while (1)
    {
        if (scanf("%d", &matriculaTarget) != 1)
        {
            printf("Entrada inválida, insira um número inteiro: ");
        }
        else if (matriculaExiste(matriculaTarget))
        {
            break;
        }
        else
        {
            printf("Matrícula não encontrada, insira outra: ");
        }
        while ((c = getchar()) != '\n' && c != EOF)
            ;
    }
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    printf("Matrícula %d encontrada. Insira o novo curso: ", matriculaTarget);
    fgets(novoCurso, sizeof(novoCurso), stdin);
    novoCurso[strcspn(novoCurso, "\n")] = '\0';

    FILE *DATA = ("ALUNOS.DAT", "r");
    if (DATA == NULL)
    {
        printf("Falha ao abrir o arquivo.\n");
        return 1;
    }

    FILE *TEMP_DATA = ("TEMP_ALUNOS.DAT", "w");
        if (TEMP_DATA == NULL)
    {
        printf("Falha ao criar o arquivo temporário.\n");
        fclose(DATA);
        return 1;
    }

    while(lerProximoAluno(DATA, &aluno))
    if(aluno.matricula == matriculaTarget) {
        aluno.curso = novoCurso;
    }
    escreverAluno(TEMP_DATA, aluno);
    remove("ALUNOS.DAT");
    rename("TEMP_ALUNOS.DAT", "ALUNOS.DAT");

    return 0;
}

int matriculaExiste(int matricula)
{
    FILE *arquivo = fopen("ALUNOS.DAT", "r");
    if (arquivo == NULL)
    {
        return 0;
    }
    char linha[256];
    int matriculaLida;

    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        if (sscanf(linha, "Matrícula: %d", &matriculaLida) == 1)
        {
            if (matriculaLida == matricula)
            {
                fclose(arquivo);
                return 1;
            }
        }
    }
    fclose(arquivo);
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