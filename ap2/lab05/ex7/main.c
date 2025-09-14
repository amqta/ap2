#include <stdio.h>
#include "header.h"

int main()
{
    int n;
    printf("Insira o valor de n: ");
    scanf("%d", &n);

    while (n < 0)
    {
        printf("Insira um valor positivo: ");
        scanf("%d", &n);
    }

    if (n <= 1)
    {
        printf("Não é primo\n", n);
    }
    else if (ehPrimo(n, 2))
    {
        printf("É primo.\n", n);
    }
    else
        printf("Não é primo.\n");

    return 0;
}