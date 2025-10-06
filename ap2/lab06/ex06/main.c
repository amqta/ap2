#include <stdio.h>
#include "header.h"

int main()
{
    float v[5];
    int i;

    printf("Insira 5 valores para o vetor:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    int somatorio = soma(v, 5);

    float media_calculada = media(somatorio, 5);

    float desvio_padrao = desvio(v, media_calculada, 5);

    printf("\n--- Resultados ---\n");
    printf("Soma: %d\n", somatorio);
    printf("Média: %.2f\n", media_calculada);
    printf("Desvio Padrão: %.2f\n", desvio_padrao);

    substitui(v, 5);

    printf("\nVetor após substituir negativos por zero:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%.2f ", v[i]);
    }
    printf("\n");

    return 0;
}