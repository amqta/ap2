#include "header.h"
#include <stdio.h>

int contagemRegressiva(int n) {
    while (n < 0)
    {
        printf("Insira um valor válido positivo para n: ");
        scanf("%d",&n);
    }
    
    // caso base
    if (n == 0) {
        return 0;
    } else
    // passo recursivo
    printf("%d\n", n);
    contagemRegressiva(n-1);
}