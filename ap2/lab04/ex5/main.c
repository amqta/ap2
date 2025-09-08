#include <stdio.h>
#include "header.h"

int main()
{
    int a, b, c;
    printf("Insira o valor do primeiro lado: ");
    scanf("%d", &a);

    printf("Insira o valor do segundo lado: ");
    scanf("%d", &b);

    printf("Insira o valor do terceiro lado: ");
    scanf("%d", &c);

    int resultado = eh_triangulo(a, b, c);

    if (resultado == 1)
    {
        printf("O triângulo é escaleno.\n");
    }
    if (resultado == 2)
    {
        printf("O triângulo é isósceles.\n");
    }
    if (resultado == 3)
    {
        printf("O triângulo é equilátero.\n");
    }
    return 0;
}