#include <stdio.h>
#include <string.h>

/*
3 – Adapte o exercício 2 para que, depois de cadastrar os 3 alunos, o programa encontre e exiba o
nome do aluno que obteve a maior nota.
*/

struct aluno
{
    char nome[50];
    int idade;
    float nota;
};

void main()
{
    float soma;
    float maior = 0;
    struct aluno a[3];
    for (int i = 0; i < 3; i++)
    {
        printf("\nInsira o nome: ");
        scanf("%s", a[i].nome);
        fflush(stdin);

        printf("Insira a idade: ");
        scanf("%d", &a[i].idade);

        printf("Insira a nota: ");
        scanf("%f", &a[i].nota);
        soma += a[i].nota;

        if (a[i].nota > maior)
        {
            maior = a[i].nota;
        }
    }
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Nome do %do aluno: %s\nIdade do %do aluno: %d\nNota do %d aluno: %.1f\n\n", i + 1, a[i].nome, i + 1, a[i].idade, i + 1, a[i].nota);
    }
    printf("\nMédia das notas da turma: %.1f\n\n", soma / 3);

    for (int i = 0; i < 3; i++)
    {
        if (a[i].nota == maior)
        {
            printf("Aluno com maior nota: %s\n", a[i].nome);
        }
    }
}