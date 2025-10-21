#include <stdio.h>

/*
1. Faça um programa que crie um arquivo TEXTO em disco, com o nome “dados.txt” e escreva
neste arquivo em disco uma contagem de 20 em 20, que vá de 0 até 1000, com um número em
cada linha.
*/

int main()
{
    FILE *TEXTO;
    TEXTO = fopen("dados.txt", "w");

    if (TEXTO == NULL)
    {
        printf("Erro.\n");
        return 1;
    }
    for (int i = 0; i <= 1000; i += 20)
    {
        fprintf(TEXTO, "%d\n", i);
    }
    fclose(TEXTO);
    return 0;
}