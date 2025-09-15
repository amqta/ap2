#include "header.h"
#include <stdio.h>

int mdc(int a, int b)
{
    // caso base
    if (b == 0)
    {
        return a;
    }
    // recursiva
    return mdc(b, a % b);
}