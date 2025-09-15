#include <stdio.h>
#include "header.h"

int main()
{
    int n;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    while (n < 0)
    {
        printf("Insira um valor válido para n: ");
        scanf("%d", &n);
    }
    printf("%d! = %d\n", n, calculaFatorial(n));
    return 0;
}