#include "header.h"
#include <stdio.h>

void ordenador(int *n)
{
    int maior = n[0];
    int menor = n[0];
    // aqui determina o maior e o menor
    for (int i = 0; i < 3; i++)
    {
        if (n[i] > maior)
        {
            maior = n[i];
        }
        if (n[i] < menor)
        {
            menor = n[i];
        }
    }
    int meio = (n[0] + n[1] + n[2]) - menor - maior;
    // aqui ordena
    n[0] = menor;
    n[1] = meio;
    n[2] = maior;
}