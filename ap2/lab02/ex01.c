#include <stdio.h>
#include <string.h>

/*
1 – Crie uma struct para representar um Aluno com os campos nome, idade e nota (tipo real). Em
seguida, declare um vetor de 5 alunos. Preencha os dados de forma automática para cada aluno e, por
fim, imprima os dados de todos eles.
*/

struct aluno
{
    char nome[50];
    int idade;
    float nota;
};

void main()
{
    struct aluno a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o nome: ");
        scanf("%s", a[i].nome);
        fflush(stdin);

        printf("Insira a idade: ");
        scanf("%d", &a[i].idade);

        printf("Insira a nota: ");
        scanf("%f", &a[i].nota);
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Nome do %do aluno: %s\nIdade do %do aluno: %d\nNota do %d aluno: %.1f\n\n", i + 1, a[i].nome, i + 1, a[i].idade, i + 1, a[i].nota);
    }
}
