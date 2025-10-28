#include <stdio.h>
#include <stdlib.h>

/*
4 – Crie uma função int calcula_soma( ), que declare uma variável local int x. A função deverá ler o
valor x e calcular a soma entre x e a variável global num. Ao final, retorna o valor da soma para a
função main( ), para imprimir o resultado.
*/

int g_NUM;

int calcula_soma()
{
    int x;
    printf("Insira o valor de g_NUM: ");
    scanf("%d", &g_NUM);
    printf("Insira o valor de x: ");
    scanf("%d", &x);
    return g_NUM + x;
}
int main()
{
    printf("A soma de g_NUM e x é %d.\n", calcula_soma());
    return 0;
}