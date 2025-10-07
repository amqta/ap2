#include <stdio.h>

/* 16 – Considere a seguinte declaração:
int A, *B, **C, ***D;
Escreva um programa que leia a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor
utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e
D o quadruplo. */

int main()
{
    int A, *B, **C, ***D;

    B = &A;
    C = &B;
    D = &C;

    printf("Insira o valor da variável: ");
    scanf("%d", &A);
    printf("Valor original: %d\nValor duplicado: %d\nValor triplicado: %d\nValor quadriplicado: %d\n", A, *B * 2, **C * 3, ***D * 4);
    return 0;
}