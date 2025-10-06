#include "header.h"
#include <stdio.h>
#include <string.h>

void altera(habitante *x)
{
    printf("Insira o nome: ");
    fgets(x->nome, 100, stdin);
    x->nome[strcspn(x->nome, "\n")] = '\0';

    printf("Insira a idade: ");
    scanf("%d", &x->idade);

    printf("Insira o sexo (M ou F): ");
    scanf(" %c", &x->sexo);

    while (x->sexo != 'M' && x->sexo != 'm' && x->sexo != 'F' && x->sexo != 'f')
    {
        printf("Insira uma entrada válida (M ou F): ");
        scanf(" %c", &x->sexo);
    }

    printf("Insira o salário: ");
    scanf("%f", &x->salario);

    printf("Insira o número de filhos: ");
    scanf("%d", &x->numFilhos);
    getchar();
}

void exibe(habitante *x)
{
    printf("\n--------------------------\n");
    printf("Nome: %s\nIdade: %d\nSexo: %c\nSalário: R$%.2f\nNúmero de filhos: %d\n", x->nome, x->idade, x->sexo, x->salario, x->numFilhos);
    printf("\n--------------------------\n");
}
