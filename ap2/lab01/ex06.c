#include <stdio.h>
#include <string.h>

/*
6 – Dê exemplos quanto à declaração, carga automática de variáveis, entrada e saída de valores em
variáveis do tipo struct?
*/

// declaração
struct Pessoa
{
    float altura, peso, media, IP;
    char nome[50], curso[30];
    int matricula, anoIngresso;
};
int main()
{
    // carga automática de variáveis
    struct Pessoa Arthur = {1.75, 70, 7.5, 1, "Arthur", "CC", 202500175, 2025};
    struct Pessoa p1;
    // entrada e saída de variáveis
    printf("Insira a altura da pessoa: ");
    scanf("%f", &p1.altura);
    printf("Altura da pessoa: %.2f\n", p1.altura);
    printf("Altura de Arthur: %.2f\n", Arthur.altura);
    return 0;
}