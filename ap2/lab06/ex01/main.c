#include <stdio.h>
#include "header.h"

int main()
{
    int op;
    printf("Insira o valor de A: ");
    int a, b;
    scanf("%d", &a);

    printf("Insira o valor de B: ");
    scanf("%d", &b);
    do
    {

        printf("\nInsira a função a ser testada: \n");
        printf("1 - Troca de valores\n2 - Acréscimo de A e decréscimo de B\n3 - Sair\n");

        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Valor de A: %d\nValor de B: %d\n", a, b);
            troca(&a, &b);
            printf("Valor de A invertido: %d\nValor de B invertido: %d\n", a, b);
            break;
        case 2:
            printf("Valor de A: %d\nValor de B: %d\n", a, b);
            acrescimoDecrescimo(&a, &b);
            printf("Valor de A com acréscimo: %d\n Valor com decréscimo de B: %d\n", a, b);
            break;
        default:
            while (op != 1 && op != 2 && op != 3)
            {
                printf("Insira uma opção válida: ");
                scanf("%d", &op);
            }

            break;
        }
    } while (op != 3);

    return 0;
}