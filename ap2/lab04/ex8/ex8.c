#include "header.h"
#include <stdio.h>

void calculaTaxa(struct cliente cliente[])
{
    for (int i = 0; i < 3; i++)
    {
        if (cliente[i].horas <= 2) // usou por 2 horas ou menos
        {
            cliente[i].total = MINIMO;
        }
        else // usou por mais de 2 horas, vai ter adicional
            cliente[i].total = (cliente[i].horas - 2) * 2 + MINIMO;
        if (cliente[i].total > 30)
        {
            cliente[i].total = 30;
        }
    }
}