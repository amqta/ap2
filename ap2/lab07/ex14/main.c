#include <stdio.h>
#include <string.h>

/* 14 – Crie uma estrutura "Pessoa" com os campos nome, idade e endereço (com os campos rua, número
e cidade). Em seguida, declare um ponteiro para uma variável do tipo Pessoa e imprima os dados da
pessoa na tela. */

int main()
{

    typedef struct
    {
        char rua[100];
        int numero;
        char cidade[50];
    } Endereco;

    typedef struct
    {
        char nome[50];
        int idade;
        Endereco endereco;
    } Pessoa;

    Pessoa pessoa;
    Pessoa *p = &pessoa;

    printf("Insira o nome: ");
    fgets(p->nome, sizeof(p->nome), stdin);
    p->nome[strcspn(p->nome, "\n")] = '\0';

    printf("Insira a idade: ");
    scanf("%d", &p->idade);
    getchar();

    printf("Insira o nome da rua: ");
    fgets(p->endereco.rua, sizeof(p->endereco.rua), stdin);
    p->endereco.rua[strcspn(p->endereco.rua, "\n")] = '\0';

    printf("Insira o número da casa: ");
    scanf("%d", &p->endereco.numero);
    getchar();

    printf("Insira a cidade: ");
    fgets(p->endereco.cidade, sizeof(p->endereco.cidade), stdin);
    p->endereco.cidade[strcspn(p->endereco.cidade, "\n")] = '\0';

    printf("\n--------Pessoa--------\n");
    printf("Nome: %s\nIdade: %d\nRua: %s\nNúmero da casa: %d\nCidade: %s\n", p->nome, p->idade, p->endereco.rua, p->endereco.numero, p->endereco.cidade);
    printf("\n----------------------\n");

    return 0;
}