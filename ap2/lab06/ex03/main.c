#include <stdio.h>
#include <string.h>
#include "header.h"

int main()
{

    habitante x;
    int op;
    altera(&x);

    do
    {
        printf("\nInsira sua opção desejada:\n1 - Alterar\n2 - Exibir\n3 - Sair\n");
        scanf("%d", &op);
        getchar();
        switch (op)
        {
        case 1:
            altera(&x);
            break;

        case 2:
            exibe(&x);
            break;

        case 3:
            return 0;
            break;

        default:
            do
            {
                printf("Insira um valor válido: ");
                scanf("%d", &op);
                getchar();
            } while (op < 1 || op > 3);
        }
    } while (op != 3);
    return 0;
}