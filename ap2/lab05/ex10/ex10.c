#include "header.h"

int ehPalindromo(char *str, int inicio, int fim)
{
    // caso base
    if (inicio >= fim)
    {
        return 1; // Verdadeiro
    }

    // caso base 2
    if (str[inicio] != str[fim])
    {
        return 0; // Falso
    }
    // recursiva
    return ehPalindromo(str, inicio + 1, fim - 1);
}