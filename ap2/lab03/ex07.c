#include <stdio.h>

/*
7 – Crie uma função int calcula_fatorial( ). A função principal deverá ler o valor g_N, chama a
função para calcular o Fatorial de g_N. Ao final, calcula_fatorial( ) retorna o valor da soma para a
função main( ), para imprimir o resultado.
*/

int g_N;

int calcula_fatorial()
{
    printf("Insira o valor do número: ");
    scanf("%d", &g_N);

    int fat = 1;
    for (int i = 1; i <= g_N; i++)
    {
        fat *= i;
    }
    return fat;
}

int main()
{
    printf("O fatorial de %d é %d.\n", g_N, calcula_fatorial());
    return 0;
}