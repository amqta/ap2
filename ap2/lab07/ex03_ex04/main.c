#include <stdio.h>

/* 3 – O que as linhas abaixo fazem? Escreva como um comentário */

int main()
{
    int a = 5, b = 12; // Declara as variáveis "a" e "b" do tipo inteiro, atribuindo os valores 5 e 12, respectivamente.
    int *p;            // Declara o ponteiro *p, que aponta para um inteiro.
    int *q;            // Declara o ponteiro *q, que aponta para um inteiro.
    p = &a;            // O ponteiro *p agora aponta para o endereço do inteiro a.
    q = &b;            // O ponteiro *q agora aponta para o endereço do inteiro b.
    int c = *p + *q;   // Declara a variável "c" do tipo inteiro, que recebe a soma dos valores apontados por *p e *q.

    return 0;
}

/*

4 – Faça o teste de mesa do exercício anterior, não deixe de colocar um campo para indicar o endereço
de memória.
0       a       a(endereço)         b       b(endereço)         *p      p       *p(endereço)        *q      q       *q(endereço)        c       c(endereço)
1       5       0061FF18            12      0061FF14             ?      ?       0061FF10             ?      ?       0061FF0C            ?       0061FF10
2       5       0061FF18            12      0061FF14             ?      ?       0061FF10             ?      ?       0061FF0C            ?       0061FF10
3       5       0061FF18            12      0061FF14             ?      ?       0061FF10             ?      ?       0061FF0C            ?       0061FF10
4       5       0061FF18            12      0061FF14             5   0061FF18   0061FF10             ?      ?       0061FF0C            ?       0061FF10
5       5       0061FF18            12      0061FF14             5   0061FF18   0061FF10             12  0061FF14   0061FF0C            ?       0061FF10
6       5       0061FF18            12      0061FF14             5   0061FF18   0061FF10             12  0061FF14   0061FF0C            17      0061FF10

*/