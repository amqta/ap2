#include <stdio.h>
#include "header.h"

int main()
{
    float conta = 0;
    while (1)
    {
        menu(conta);

        // escolha do usuário no menu
        int op;
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            conta = depositar(conta);
            printf("Você agora tem R$%.2f.\n", conta);
            break;
        case 2:
            conta = sacar(conta);
            printf("Você agora tem R$%.2f.\n", conta);
            break;
        case 3:
        printf("Valor na conta: R$%.2f\n");
            break;
        case 4:
            return 0;
            break;
        default:
        do {
            printf("\nInsira um valor válido: ");
            scanf("%d", &op);
        }while(op < 1 || op > 4);
            break;
        }
    }
    return 0;
}