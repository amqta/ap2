#include <stdio.h>
#include "header.h"

int main()
{
    int n[3];
    printf("\nInsira os valores a serem ordenados:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Valor do %do valor: ", i + 1);
        scanf("%d", &n[i]);
    }
    printf("Valores não ordenados:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", n[i]);
    }

    printf("\nValores ordenados:\n");
    ordenador(n);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}