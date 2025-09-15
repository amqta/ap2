#include <stdio.h>
#include <string.h>
#include "header.h"

int main()
{
    char texto[100];

    printf("Insira uma palavra: ");
    scanf("%s", texto);

    int len = strlen(texto);
    int resultado;

    if (len == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = ehPalindromo(texto, 0, len - 1);
    }

    if (resultado)
    {
        printf("%s é um palindromo.\n", texto);
    }
    else
    {
        printf("%s não é um palindromo.\n", texto);
    }

    return 0;
}