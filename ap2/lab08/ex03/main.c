#include <stdio.h>
#include <string.h>

/*
3. Faça um programa para criar um arquivo chamado ALUNOS.DAT, no qual cada registro será
composto pelos seguintes campos: matrícula, nome, curso, nota1 e nota2.
*/

int main()
{
    printf("Quantia de alunos a serem registrados: ");
    int n, c;
    scanf("%d", &n);
    while ((c = getchar()) != '\n' && c != EOF);

    typedef struct
    {
        char nome[50], curso[100];
        int matricula;
        float nota1, nota2;
    } Aluno;

    Aluno aluno[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nMatrícula: ");
        scanf("%d", &aluno[i].matricula);
        while ((c = getchar()) != '\n' && c != EOF);

        printf("Nome: ");
        fgets(aluno[i].nome, 50, stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';

        printf("Curso: ");
        fgets(aluno[i].curso, 100, stdin);
        aluno[i].curso[strcspn(aluno[i].curso, "\n")] = '\0';

        printf("Nota 1: ");
        scanf("%f", &aluno[i].nota1);
        while ((c = getchar()) != '\n' && c != EOF);

        printf("Nota 2: ");
        scanf("%f", &aluno[i].nota2);
        while ((c = getchar()) != '\n' && c != EOF);
    }

    FILE *DATA;
    DATA = fopen("ALUNOS.DAT", "w");

    if (DATA == NULL)
    {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(DATA, "\nAluno %d\nMatrícula: %d\nNome: %s\nCurso: %s\nNota 1: %.1f\nNota 2: %.1f\n", i + 1, aluno[i].matricula, aluno[i].nome, aluno[i].curso, aluno[i].nota1, aluno[i].nota2);
    }

    fclose(DATA);
    return 0;
}