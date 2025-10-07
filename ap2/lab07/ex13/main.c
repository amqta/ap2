#include <stdio.h>
#include <string.h>

/* 13 - Crie uma estrutura "Aluno" com os campos nome, idade e nota. Em seguida, declare um ponteiro
para uma variável da estrutura tipo Aluno. Usando o ponteiro, preencha os campos da estrutura com
dados informados pelo usuário e imprima os dados do aluno na tela.  */

int main()
{
    typedef struct
    {
        char nome[50];
        int idade;
        float nota;
    } Aluno;

    Aluno aluno;
    Aluno *ptrAluno = &aluno;

    printf("Insira o nome do aluno: ");
    fgets(ptrAluno->nome, 50, stdin);
    ptrAluno->nome[strcspn(ptrAluno->nome, "\n")] = '\0';

    printf("Insira a idade do aluno: ");
    scanf("%d", &ptrAluno->idade);
    getchar();

    printf("Insira a média do aluno: ");
    scanf("%f", &ptrAluno->nota);

    printf("\n--------Aluno--------\n");
    printf("Nome: %s\nIdade: %d\nMédia: %.1f\n---------------------\n", ptrAluno->nome, ptrAluno->idade, ptrAluno->nota);

    return 0;
}