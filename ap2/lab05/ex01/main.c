#include <stdio.h>
#include "header.h"

int main() {
    printf("Valor de n: ");
    int n;
    scanf("%d",&n);
    printf("%d", contagemRegressiva(n));
    return 0;
}