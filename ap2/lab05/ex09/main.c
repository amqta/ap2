#include <stdio.h>
#include "header.h"

int main()
{
    int a, b;
    do
    {
        printf("Insira dois numeros inteiros e positivos: ");
        scanf("%d %d", &a, &b);

        if (a <= 0 || b <= 0)
        {
            printf("Os numeros devem ser positivos.\n");
        }
    } while (a <= 0 || b <= 0);

    int resultado = mdc(a, b);

    printf("O MDC de %d e %d é %d\n", a, b, resultado);

    return 0;
}