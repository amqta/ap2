#include "header.h"
#include <stdio.h>

int verifica_positivo_negativo(int n)
{
    if (n > 0)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 2;
    }
    else
        return 0;
}