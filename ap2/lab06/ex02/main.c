#include <stdio.h>
#include <string.h>
#include "header.h"

int main()
{
    char frase[100];
    int resultado = contadorVogais(frase);
    printf("A quantia total de vogais na frase é %d.\n", resultado);

    return 0;
}