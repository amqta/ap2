#include <stdio.h>
#include <string.h>

/*
7 – Como atribuir um valor a uma string dentro de uma struct?
*/

struct Pessoa
{
    float altura, peso, media, IP;
    char nome[50], curso[30];
    int matricula, anoIngresso;
};
int main()
{
    struct Pessoa Arthur = {1.75, 70, 7.5, 1, "Arthur", "CC", 202500175, 2025};
    struct Pessoa p1;

    printf("Insira o nome da pessoa: ");
    fgets(p1.nome, sizeof(p1.nome), stdin);
    printf("Nome da pessoa: %s\n", p1.nome);
    printf("Nome de Arthur: %s\n", Arthur.nome);
    return 0;
}