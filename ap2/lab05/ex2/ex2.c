#include "header.h"
#include <stdio.h>

int somatorio(int n) {
    // base
    if (n == 0)
    {
        return 0;
    } else
    // passo recursivo
    return n + somatorio(n-1);
}
