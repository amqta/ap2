#include "header.h"
#include <stdio.h>

int QuantiaDeDigitos(int n)
{
    if (n < 10) // caso base
    {
        return 1;
    }
    // recursiva
    n = 1 + QuantiaDeDigitos(n / 10);
}