#include <stdio.h>

/* 15 – Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices para
percorrer o array, apenas aritmética de ponteiros. */

void imprime(int *p, int tamanho) {
    int *fim = p + tamanho;
    while (p < fim) {
        printf("%d\n", *p);
        p++;
    }
}

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    imprime(vetor, tamanho);


    return 0;
}