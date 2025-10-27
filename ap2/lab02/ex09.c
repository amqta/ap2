#include <stdio.h>
#include <string.h>

/*
9 - Crie uma struct Telefone com os campos ddd e número. Em seguida, crie uma struct Contato com
os campos nome, e-mail e um vetor de 2 Telefones. Declare um vetor de 3 Contatos. Permita que o
usuário preencha os dados de todos eles e, no final, exiba a agenda completa, incluindo os dois
telefones de cada contato.
*/

struct Telefone
{
    int ddd;
    int numero;
};

struct Contato
{
    char nome[50], email[50];
    struct Telefone telefone[2];
};

void main()

{
    struct Contato contato[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Nome: ");
        fgets(contato[i].nome, sizeof(contato[i].nome), stdin);
        contato[i].nome[strcspn(contato[i].nome, "\n")] = '\0';

        printf("E-mail: ");
        fgets(contato[i].email, sizeof(contato[i].email), stdin);
        contato[i].email[strcspn(contato[i].email, "\n")] = '\0';

        printf("1o DDD: ");
        scanf("%d", &contato[i].telefone[0].ddd);

        printf("1o telefone: ");
        scanf("%d", &contato[i].telefone[0].numero);

        printf("2o DDD: ");
        scanf("%d", &contato[i].telefone[1].ddd);

        printf("2o telefone: ");
        scanf("%d", &contato[i].telefone[1].numero);
        getchar();

        printf("\n\n");
    }
    printf("------------------------- AGENDA -------------------------\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Nome: %s\nE-mail: %s\n1o número: %d %d\n2o número: %d %d\n\n", contato[i].nome, contato[i].email, contato[i].telefone[0].ddd, contato[i].telefone[0].numero, contato[i].telefone[1].ddd, contato[i].telefone[1].numero);
    }
}