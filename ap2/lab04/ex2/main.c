#include <stdio.h>
#include "header.h"

int main()
{
    int n;
    printf("Insira o valor: ");
    scanf("%d", &n);

    int resultado = verifica_positivo_negativo(n);
    if (resultado == 1)
    {
        printf("O número é positivo\n");
    }
    else if (resultado == 2)
    {
        printf("0 é neutro\n");
    }
    else
        printf("O resultado é negativo\n");

    return 0;
}