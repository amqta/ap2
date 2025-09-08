#include <stdio.h>
#include "header.h"

float depositar(float conta)
{
    float deposito;
    printf("\nInsira o valor que deseja depositar: R$");
    scanf("%f", &deposito);
    return conta + deposito;
}

float sacar(float conta)
{
    float saque;
    printf("\nInsira o valor que deseja sacar: R$");
    scanf("%f", &saque);
    while (saque > conta)
    {
        printf("\nVocê não pode sacar R$%.2f!\nInsira um novo valor para sacar: R$", saque);
        scanf("%f", &saque);
    }
    return conta - saque;
}