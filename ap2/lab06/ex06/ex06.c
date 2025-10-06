#include "header.h"
#include <stdio.h>
#include <math.h>

int soma(float *v, int tamanho)
{
    float somatorio = 0;
    for (int i = 0; i < 5; i++)
    {
        somatorio += v[i];
    }
    return (int)somatorio;
}

float media(int soma, int tamanho)
{
    return (float)soma/5;
}

float desvio(float *v, float media, int tamanho) {
    float somatorio = 0;
    for(int i = 0; i < 5; i++) {
        somatorio += pow((v[i] - media), 2);
    }
    float desvio = sqrt(somatorio/5);
    return desvio;
}

void substitui(float *v, int tamanho) {
    for(int i = 0; i < 5; i++) {
        if (v[i] < 0)
        {
            v[i] = 0;
        }
    }
}