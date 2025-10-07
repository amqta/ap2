#include <stdio.h>

/* 1 – O que as linhas abaixo fazem? Escreva como um comentário, assim como na primeira linha */

int main()
{
    int i = 99, j; // Declara duas variáveis do tipo inteiro: i, j, sendo que o valor de i=99.
    int *p;        // Declara um ponteiro *p, que aponta para um número inteiro
    p = &i;        // *p passa a apontar para o endereço do inteiro i, tendo o valor *p = 99
    j = *p + 300;  // j recebe o valor de onde o ponteiro *p aponta (99) e soma 300

    return 0;
}

/*

2 – Faça o teste de mesa do exercício anterior, não deixe de colocar um campo para indicar o endereço
de memória.

    i       i(endereço)     *p           p      *p(endereço)     j       j(endereço)
1   99      0061FF1C         ?           ?       0x61FF14        ?       0x61FF18
2   99      0061FF1C         ?           ?       0x61FF14        ?       0x61FF18
3   99      0061FF1C        99        0x61FF1C   0x61FF14        ?       0x61FF18
4   99      0061FF1C        99        0x61FF1C   0x61FF14       399      0x61FF18

*/