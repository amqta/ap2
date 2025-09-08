#include "header.h"
#include <stdio.h>

void Exercicio(int questao)
{
    printf("Escolha o exercício: ");
    scanf("%d", &questao);
    if (questao > 0 && questao < 9)
    {
        printf("Questão %d\n", questao);
    }
    else
        printf("Insira um exercício válido!\n");
}