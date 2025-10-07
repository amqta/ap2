#include <stdio.h>

/* 10 – Escreva um módulo em C que, usando variáveis locais, que declare um vetor com 5 posições e um
ponteiro para essa variável. Usando ponteiro, retorne a soma de todos os elementos do vetor. */

int main() {
    float v[5];
    int i = 0;
    float *p = v;
    for(int i = 0; i < 5; i++) {
        printf("Insira o %do valor do vetor: ", i+1);
        scanf("%f",&v[i]);
    }
    float soma = 0;
    while(i < 5) {
        soma += *p;
        p++;
        i++;
    }
    printf("\nSoma dos valores do vetor: %.2f.\n", soma);

    return 0;
}