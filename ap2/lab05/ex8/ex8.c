#include "header.h"
#include <stdio.h>

/*
Aqui, tomei a liberdade de reutilizar parte do código do exercício nº6.
Embora saiba que não é o meio mais eficiente,
resolvi fazer isso a fim de praticar a recursividade com múltiplas funções.
*/

// Nova função recursiva para calcular a potência de inteiros
int potencia(int base, int expoente)
{
    // Caso base: qualquer número elevado a 0 é 1.
    if (expoente == 0)
    {
        return 1;
    }
    // Passo recursivo: base * base^(expoente-1)
    return base * potencia(base, expoente - 1);
}

int quantiaDeDigitos(int n)
{
    // Caso base para números de 1 dígito
    if (n < 10 && n > -10) // Torna um pouco mais robusto
    {
        return 1;
    }
    return 1 + quantiaDeDigitos(n / 10);
}

int inverteNumeros(int n)
{
    // caso base
    if (n < 10)
    {
        return n;
    }

    // recursiva
    int ultimoDigito = n % 10;
    int restoDoNumero = n / 10;

    int digitosNoResto = quantiaDeDigitos(restoDoNumero);
    int potenciaDe10 = potencia(10, digitosNoResto);

    return (ultimoDigito * potenciaDe10) + inverteNumeros(restoDoNumero);
}