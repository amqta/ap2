#include <stdio.h>
#include "header.h"

int main()
{
    int num;

    printf("Insira o numero: ");
    scanf("%d", &num);

    int resultado = eh_primo(num);
    if (resultado == 0)
    {
        printf("O numero eh primo\n");
    }
    else
    {
        printf("O numero nao eh primo.\n");
    }

    return 0;
}