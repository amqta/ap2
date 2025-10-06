/*

Seja uma estrutura global do tipo struct CLIENTEBANCARIO, que contenha os campos: conta(int), nome(char com 30 posições), saldo(float). Assuma que o vetor struct CLIENTEBANCARIO v[3] seja de escopo local.

a) Escreva a função void LER(), que leia todos os dados do vetor de registro. (1,0)

b) Escreva a função void IMPRIMIR(), que escreva todos os dados do vetor de registro. (1,0)

c) Assuma que cada elemento do vetor, tenha um valor diferente para o campo saldo. Escreva a função float MAIORSALDO(), que retorne o maior saldo. (2,0)

d) Na função main(), utilizando o valor retornado pela chamada da função MAIORSALDO(), especifique a conta, o nome e o saldo do cliente com maior saldo. (2,0)

*/

#include <stdio.h>
#include <string.h>

// variável global exigida pelo exercício

struct CLIENTEBANCARIO
{
    int conta;
    char nome[30];
    float saldo;
};

// header

void LER(struct CLIENTEBANCARIO cliente[3]);
void IMPRIMIR(struct CLIENTEBANCARIO cliente[3]);
float MAIORSALDO(struct CLIENTEBANCARIO cliente[3]);

int main()
{
    struct CLIENTEBANCARIO cliente[3];
    LER(cliente);
    IMPRIMIR(cliente);
    printf("\nO cliente de maior saldo possui R$%.2f.\n", MAIORSALDO(cliente));

    for (int i = 0; i < 3; i++)
    {
        if (cliente[i].saldo == MAIORSALDO(cliente))
        {
            printf("\nConta do cliente de maior saldo:\nConta: %d\nNome: %s\nSaldo: R$%.2f\n", cliente[i].conta, cliente[i].nome, cliente[i].saldo);
        }
    }

    return 0;
}

// funções

void LER(struct CLIENTEBANCARIO cliente[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Insira os dados do cliente:\nNome: ");
        fgets(cliente[i].nome, sizeof(cliente[i].nome), stdin);
        cliente[i].nome[strcspn(cliente[i].nome, "\n")] = '\0';

        printf("ID da conta: ");
        scanf("%d", &cliente[i].conta);
        getchar();

        printf("Saldo da conta: R$");
        scanf("%f", &cliente[i].saldo);
        getchar();
    }
}

void IMPRIMIR(struct CLIENTEBANCARIO cliente[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("\n--------------------------\nConta: %d\nNome: %s\nSaldo: R$%.2f\n", cliente[i].conta, cliente[i].nome, cliente[i].saldo);
    }
}

float MAIORSALDO(struct CLIENTEBANCARIO cliente[3])
{
    float maior = cliente[0].saldo;
    for (int i = 0; i < 3; i++)
    {
        if (cliente[i].saldo > maior)
        {
            maior = cliente[i].saldo;
        }
    }
    return maior;
}