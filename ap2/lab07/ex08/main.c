#include <stdio.h>

/* 8 – Escreva um módulo em C que, usando variáveis locais, declare uma variável inteira e um ponteiro
para essa variável, e depois altere o valor da variável através do ponteiro. */

int main()
{
    int a = 5;
    int *p = &a;

    printf("Valor de a antes de ser alterado: %d\n", a);

    *p = 10;

    printf("Valor de a depois de ser alterado: %d\n", a);
    return 0;
}