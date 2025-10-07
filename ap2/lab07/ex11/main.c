#include <stdio.h>

/* 11 – Escreva um módulo em C que, usando variáveis locais, declare um vetor de inteiros e um ponteiro
para esse vetor. Depois, peça para o usuário digitar os valores do vetor e use o ponteiro para imprimir
os valores na tela. */

int main()
{
    int n, v[n];
    int *p = v;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);
    while (n < 1)
    {
        printf("Insira um valor válido: ");
        scanf("%d", &n);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Insira o valor do %do valor do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("\nO vetor inserido possui os seguintes valores:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *p);
        p++;
    }
    return 0;
}