#include <stdio.h>
#include "header.h"

int main(void)
{
    struct cliente cliente[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Insira a quantia de horas utilizadas pelo cliente %d: ", i + 1);
        scanf("%d", &cliente[i].horas);
    }
    calculaTaxa(cliente);
    tabela(cliente);
}