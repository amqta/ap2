#include <stdio.h>
#include <stdlib.h>

/*
3 – Crie uma função int verifica_positivo_negativo( ), que leia o valor global e verifique ser é posi
tivo (retorna 1) ou não (retorna 0). Ao final, retorna o valor da verificação para a função main( ),
para imprimir o resultado.
*/

int g_NUM;

int verifica_positivo_negativo()
{
    printf("Insira o valor: ");
    scanf("%d", &g_NUM);
    if (g_NUM > 0)
    {
        return 1; // positivo
    }
    else if (g_NUM == 0)
    {
        return 2; // 0
    }
    else
        return 0; // negativo
}
void main()
{
    int resultado = verifica_positivo_negativo();
    if (resultado == 1)
        printf("O número é positivo.\n");
    else if (resultado == 0)
    {
        printf("O número é negativo.\n");
    }
    else if (resultado == 2)
    {
        printf("O número é neutro.\n");
    }
}