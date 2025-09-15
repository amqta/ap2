#include "header.h"
#include <stdio.h>

int calculaFatorial(int n) {
    // caso base
    if (n <= 1)
    {
        return 1;
    } else
    // recursiva
    n *= calculaFatorial(n-1);
    
}