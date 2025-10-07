#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* 9 – Escreva um módulo em C que, usando variáveis locais, declare uma string e um ponteiro para essa
variável. Usando ponteiro, altere a string para sua versão em letras maiúsculas. */

int main()
{
    char string[100];
    printf("Insira a string: ");
    fgets(string, sizeof(string), stdin);

    char *ponteiro = &string[0];

    while (*ponteiro != '\0')
    {
        *ponteiro = toupper(*ponteiro);
        ponteiro++;
    }

    printf("String com letras maiúsculas:\n%s", string);

    return 0;
}