#include <stdio.h>
#include <string.h>

/*
4 – Crie uma struct para um Produto com os campos código (inteiro), nome (string) e preço (real).
Declare um vetor para 3 produtos e, utilizando um for, permita que o usuário cadastre as informações
de todos eles. Ao final, exiba a lista completa de produtos.
*/

struct Produto
{
    int codigo;
    char nome[50];
    float preco;
};

void main()
{
    struct Produto produtos[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);

        printf("Nome: ");
        scanf("%s", produtos[i].nome);
        fflush(stdin);

        printf("Preço: ");
        scanf("%f", &produtos[i].preco);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nCódigo: %d\nNome: %s\nPreço: R$%.2f\n", produtos[i].codigo, produtos[i].nome, produtos[i].preco);
    }
}
