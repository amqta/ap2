#include <stdio.h>
#include "header.h"

int main()
{
    int xmin;

    printf("Insira o tamanho do vetor: ");
    int n;
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++)
    {
        printf("Insira o %do valor do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("\n\nValores no vetor:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", v[i]);
    }
    menorXelemntos(v, &xmin, n);
    printf("\nValores multiplicados pelo menor valor do vetor (%d): \n", xmin);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}