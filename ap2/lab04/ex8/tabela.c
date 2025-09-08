#include <stdio.h>
#include "header.h"

void tabela(struct cliente cliente[])
{
    float total = 0;
    printf("====================================================\n");
    printf("Cliente\t\tHoras utilizadas\tValor\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t\t%d\t\t\t%.2f\n", i + 1, cliente[i].horas, cliente[i].total);
        total += cliente[i].total;
    }
    printf("====================================================\n");
    printf("Total:\t\t\t\t\t%.2f\n", total);
}