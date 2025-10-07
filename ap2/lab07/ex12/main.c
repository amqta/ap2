#include <stdio.h>
#include <string.h>

/* 12 – Escreva um módulo em C que, usando variáveis locais, declare um ponteiro para uma estrutura que
represente um aluno (com nome, idade e média). Depois, crie uma variável desse tipo e use o ponteiro
para preencher os dados da estrutura. Em seguida, imprima os dados do aluno na tela. */

int main()
{
    typedef struct
    {
        char nome[50];
        int idade;
        float media;
    } Aluno;

    Aluno aluno = {"Arthur", 19, 9.5};
    Aluno *ptrAluno = &aluno;

    printf("\n--------Aluno--------\n");
    printf("Nome: %s\nIdade: %d\nMédia: %.1f\n---------------------\n", ptrAluno->nome, ptrAluno->idade, ptrAluno->media);

    return 0;
}