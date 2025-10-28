#include <stdio.h>

/*
5 – Crie uma função int verifica_ano_bissexto( ), que leia a variável global e verifique ser é um ano
bissexto (retorna 1) ou não (retorna 0). Ao final, retorna o valor da verificação para a função main( ),
para imprimir o resultado.
*/

int g_NUM;

int verifica_ano_bissexto()
{
    printf("Insira o ano: ");
    scanf("%d", &g_NUM);

    if (g_NUM % 400 == 0 || g_NUM % 4 == 0 && g_NUM % 100 != 0)
    {
        return 1;
    }

    else
        return 0;
}

void main()
{
    if (verifica_ano_bissexto() == 1)
    {
        printf("%d é um ano bissexto.\n", g_NUM);
    }
    else
        printf("%d não é um ano bissexto.\n", g_NUM);
}