#include "header.h"
#include <stdio.h>

int ehPrimo(int n, int m)
{
    if (m * m > n)
    {
        return 1; // É primo
    }
    if (n % m == 0)
    {
        return 0; // não primo
    }
    else
        // recursiva
        return ehPrimo(n, m + 1);
}