#include <stdio.h>
#include "header.h"

void troca(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void acrescimoDecrescimo(int *a, int *b)
{
    *a = *a + 1;
    *b = *b - 1;
}