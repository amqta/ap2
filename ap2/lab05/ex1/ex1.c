#include "header.h"
#include <stdio.h>

int contagemRegressiva(int n) {
    // caso base
    if (n == 0) {
        return 0;
    } else
    // passo recursivo
    printf("%d\n", n);
    contagemRegressiva(n-1);
}