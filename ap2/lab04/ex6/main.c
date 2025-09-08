#include <stdio.h>
#include "header.h"

int main()
{
    int op;
    float a, b;

    printf("Insira o valor de a: ");
    scanf("%f", &a);

    printf("Insira o valor de b: ");
    scanf("%f", &b);

    menu();

    scanf("%d", &op);

    while (op > 6 || op < 1)
    {
        printf("Insira um valor válido: ");
        scanf("%d", &op);
    }

    switch (op)
    {
    case 1:
        printf("A soma de %.2f e %.2f é %.2f\n", a, b, soma(a, b));
        break;
    case 2:
        printf("A subtração de %.2f por %.2f é %.2f\n", a, b, subtracao(a, b));
        break;
    case 3:
        printf("A multiplicação de %.2f e %.2f é %.2f\n", a, b, multiplicacao(a, b));
        break;
    case 4:
        printf("O resultado da divisão é %.2f\n", divisao(a, b));
        break;
    case 5:
        printf("O resto da divisão é %d\n", resto((int)a, (int)b));
        break;
    case 6:
        printf("A potência de %.2f por %.2f é %.2f", a, b, potencia(a, b));
        break;
    }
    return 0;
}