#include <stdio.h>
#include "header.h"

int main()
{
    int base, expoente;
    printf("Insira o valor da base: ");
    scanf("%d", &base);

    printf("Insira o valor do expoente: ");
    scanf("%d", &expoente);

    while (expoente < 0)
    {
        printf("Insira um valor válido para o expoente: ");
        scanf("%d", &expoente);
    }

    printf("Resultado: %d\n", CalculaBaseExpoente(base, expoente));

    return 0;
}