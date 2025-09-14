#include <stdio.h>
#include "header.h"

int main()
{
    int n;
    printf("Insira o numero a ser invertido: ");
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("Insira um numero maior que 0: ");
        scanf("%d", &n);
    }

    int numero_invertido = inverteNumeros(n);
    printf("O numero %d invertido é %d\n", n, numero_invertido);

    return 0;
}