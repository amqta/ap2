#include <stdio.h>

/*
6 – Crie uma função int calcula_fibonacci( ). A função principal deverá ler o valor g_N, chama a
função para calcular o Fibonacci de g_N. Ao final, calcula_fibonacci( ) retorna o valor da soma para
a função main( ), para imprimir o resultado.
*/

int g_N;

int calcula_fibonacci()
{
    printf("Insira a quantia de valores da sequência de Fibonacci: ");
    scanf("%d", &g_N);

    int anterior = 0;
    int atual = 1;
    int proximo = 0;
    int soma = 0;

    for (int i = 0; i < g_N; i++)
    {
        printf("%d ", atual);
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
        soma += anterior;
    }
    printf("\n");
    return soma;
}

int main()
{
    printf("A soma da sequência acima é %d", calcula_fibonacci());
    return 0;
}