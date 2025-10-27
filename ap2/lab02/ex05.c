#include <stdio.h>
#include <string.h>

/*
5 - Crie uma struct chamada Endereço com os campos rua, número e cidade. Em seguida, crie outra
struct chamada Pessoa que contenha os campos nome e uma variável do tipo Endereço. Declare uma
variável do tipo Pessoa, preencha os dados e imprima o nome da pessoa e o endereço completo.
*/

struct Endereco
{
    char rua[50], cidade[50];
    int numero;
};
struct Pessoa
{
    char nome[50];
    struct Endereco endereco;
};

void main()
{
    struct Pessoa user;
    printf("Nome: ");
    fgets(user.nome, sizeof(user.nome), stdin);
    user.nome[strcspn(user.nome, "\n")] = '\0';

    printf("Rua: ");
    fgets(user.endereco.rua, sizeof(user.endereco.rua), stdin);
    user.endereco.rua[strcspn(user.endereco.rua, "\n")] = '\0';

    printf("Número:");
    scanf("%d", &user.endereco.numero);
    getchar();

    printf("Cidade: ");
    fgets(user.endereco.cidade, sizeof(user.endereco.cidade), stdin);
    user.endereco.cidade[strcspn(user.endereco.cidade, "\n")] = '\0';

    printf("\n\nNome: %s\nRua: %s\nNúmero: %d\nCidade: %s\n", user.nome, user.endereco.rua, user.endereco.numero, user.endereco.cidade);
}
