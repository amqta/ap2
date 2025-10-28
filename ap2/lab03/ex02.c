#include <stdio.h>
#include <stdlib.h>

/*
Para os exercícios 2, 3, 4 e 5 declare uma variável global g_NUM do tipo inteiro.

2 – Crie uma função int verifica_par_impar( ), que leia o valor global e verifique se é par ou ímpar.
Ao final, retorna o valor da verificação para a função main( ), para imprimir o resultado.
*/

int g_NUM;

int verifica_par_impar()
{
    printf("Digite o valor: ");
    scanf("%d", &g_NUM);
    if (g_NUM % 2 == 0)
    {
        return 0;
    }
    else
        return 1;
}
void main()
{
    if (verifica_par_impar() == 0)
    {
        printf("O número é par");
    }
    else
        printf("O número é ímpar");
}