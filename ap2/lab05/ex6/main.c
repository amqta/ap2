#include <stdio.h>
#include "header.h"

int main()
{
    int n;
    printf("Insira o valor de n: ");
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("Insira um valor maior que 0: ");
        scanf("%d", &n);
    }

    printf("%d tem %d dígito(s).\n", n, QuantiaDeDigitos(n));

    return 0;
}