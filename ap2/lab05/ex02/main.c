#include <stdio.h>
#include "header.h"

int main() {
    int n;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    printf("Soma dos valores de %d a 1: %d", n, somatorio(n));
    return 0;
}