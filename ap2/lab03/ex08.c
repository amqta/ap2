#include <stdio.h>

/*
8 – Crie uma variável global float g_vetor[5]. Em seguida, crie a função float calcula_media_arit
metica( ), que calcule a média aritmética dos elementos do vetor. A função main( ) deverá ler os
elementos de g_vetor, chamar a função calcula_media_aritmetica e imprimir o resultado.
*/

float g_vetor[5];

float calcula_media_aritmetica()
{
    float soma = 0.0;
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o %o valor do vetor: ", i + 1);
        scanf("%f", &g_vetor[i]);
        soma += g_vetor[i];
    }
    return soma / 5;
}

int main()
{
    printf("A média aritmética dos valores do vetor é %.2f",
           calcula_media_aritmetica());
    return 0;
}