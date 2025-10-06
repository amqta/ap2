#include "header.h"
#include <stdio.h>
#include <string.h>

int contadorVogais(char frase[])
{
    char vogal;
    int contador = 0;

    printf("Insira a frase: ");

    fgets(frase, 100, stdin);
    frase[strcspn(frase, "\n")] = '\0';

    printf("Insira a vogal: ");
    scanf(" %c", &vogal);

    while (vogal != 'a' && vogal != 'e' && vogal != 'i' && vogal != 'o' && vogal != 'u')
    {
        printf("Inválido! Insira uma vogal: ");
        scanf(" %c", &vogal);
    }

    size_t tamanhoFrase = strlen(frase);

    for (size_t i = 0; i < tamanhoFrase; i++)
    {
        if (frase[i] == vogal)
        {
            contador++;
        }
    }
    return contador;
}