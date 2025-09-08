#include <stdio.h>
#include "header.h"

int main()
{
    int a, b;
    printf("Insira o primeiro número: ");
    scanf("%d", &a);
    printf("Insira o segundo valor: ");
    scanf("%d", &b);
    int resultado = calcula_mdc(a, b);
    printf("O MDC de %d e %d é %d.\n", a, b, resultado);
    return 0;
}