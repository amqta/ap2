#include <stdio.h>

/* 5 – O que as linhas abaixo fazem? Escreva como um comentário */

int main()
{
    int i = 7, j = 3, c; // Declara os inteiros "i", "j" e "c", atribuindo os valores 7 e 3, respectivamente, deixando "c", sem um valor ainda.
    int *p;              // Declara o ponteiro *p, que aponta para inteiros.
    int *r;              // Declara o ponteiro *r, que aponta para inteiros.
    p = &i;              // O ponteiro *p recebe o endereço de i.
    r = &p;              // O ponteiro *r recebe o endereço dO ponteiro p.
    c = *r + j;          // C recebe a soma do valor no endereço de r com o valor de j.

    return 0;
}

/*
6 – Faça o teste de mesa do exercício anterior, não deixe de colocar um campo para indicar o endereço
de memória.

        i       i(endereço)     j       j(endereço)     c       c(endereço)     *p      p       *p(endereço)        *r      r       *r(endereço)
1       7       0061FF1C        3       0061FF18        ?       0061FF14        ?       ?        0061FF10           ?       ?       0061FF0C
2       7       0061FF1C        3       0061FF18        ?       0061FF14        ?       ?        0061FF10           ?       ?       0061FF0C
3       7       0061FF1C        3       0061FF18        ?       0061FF14        ?       ?        0061FF10           ?       ?       0061FF0C
4       7       0061FF1C        3       0061FF18        ?       0061FF14        7    0061FF1C    0061FF10           ?       ?       0061FF0C
5       7       0061FF1C        3       0061FF18        ?       0061FF14        7    0061FF1C    0061FF10           7    0061FF10   0061FF0C
6       7       0061FF1C        3       0061FF18     642291     0061FF14        7    0061FF1C    0061FF10           7    0061FF10   0061FF0C

*/