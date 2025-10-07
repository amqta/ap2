#include <stdio.h>

/* 7 – Seja o seguinte trecho de programa: */

int main()
{
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    return 0;
}

/*

Qual é o valor das seguintes expressões?
a) p == &i; b) *p - *q; c)*&p; d)3* - *p/(*q)+7;


a) 1, uma vez que é verdadeiro que 6422292 = 6422292.

b) -2, por ser 3 - 5.

c) 0061FF18, por ser o endereço para onde o ponteiro p aponta.

d) 6, pois a equação é equivalente a 3 * (-3)/(5) + 7 que resultaria 5,2. No entanto, como é uma divisão por inteiros, resulta 6.

*/