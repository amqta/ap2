#include "header.h"
#include <stdio.h>

int CalculaBaseExpoente(int base, int expoente)
{
    if (expoente == 0) // caso base
    {
        return 1;
    }
    // recursiva
    expoente = base * CalculaBaseExpoente(base, expoente - 1);
}