#include "header.h"
#include <stdio.h>
#include <math.h>

// calculadora

float soma(float a, float b)
{
    return a + b;
}
float subtracao(float a, float b)
{
    return a - b;
}
float multiplicacao(float a, float b)
{
    return a * b;
}
float divisao(float a, float b)
{
    while (b == 0)
    {
        printf("Divisão por 0 não é possível, insira outro valor do divisor: ");
        scanf("%f", &b);
    }
    return a / b;
}
int resto(int a, int b)
{
    while (b == 0)
    {
        printf("Divisão por 0 não é possível, insira outro valor do divisor: ");
        scanf("%d", &b);
    }
    return a % b;
}
float potencia(float a, float b)
{
    return pow(a, b);
}