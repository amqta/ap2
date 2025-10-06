#include "header.h"
#include <stdio.h>

void menorXelemntos(int v[], int *xmin, int n)
{
    int menor = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i];
        }
    }
    *xmin = menor;
    for (int i = 0; i < n; i++)
    {
        v[i] *= menor;
    }
}