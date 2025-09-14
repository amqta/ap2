#include <stdio.h>
#include "header.h"

int main() {
    int n;

    printf("Insira o valor de n: ");
    scanf("%d",&n);

    while (n < 0)
    {
        printf("Insira um valor maior ou igual a 0: ");
        scanf("%d",&n);
    }
    
    printf("O valor do número de %da posição na sequência de Fibonacci é %d.\n",n, Fibonacci(n));
    return 0;
}