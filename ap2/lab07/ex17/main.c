#include <stdio.h>

/* 17 – Implemente uma função que receba como parâmetro um array de números reais de tamanho N e
retorne quantos números negativos há nesse array. Essa função deve obedecer ao protótipo:
int negativos(float *vet, int N); */

int negativos(float *vet, int N)
{
    int contador = 0;
    for (int i = 0; i < N; i++)
    {
        if (vet[i] < 0)
        {
            contador++;
        }
    }
    return contador;
}

int main()
{
    int N;
    printf("Insira o tamanho do vetor: ");
    do
    {
        scanf("%d", &N);
        if (N < 1)
        {
            printf("Insira um valor válido para o tamnho do vetor: ");
            scanf("%d", &N);
        }

    } while (N < 1);
    float v[N];

    for (int i = 0; i < N; i++)
    {
        printf("%do valor do vetor:", i + 1);
        scanf("%f", &v[i]);
    }

    printf("\nVetor:");
    for (int i = 0; i < N; i++)
    {
        printf("\n%.2f", v[i]);
    }

    printf("\nQuantia de números negativos: %d\n", negativos(v, N));

    return 0;
}