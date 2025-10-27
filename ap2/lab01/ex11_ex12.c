#include <stdio.h>
#include <string.h>

/*
11 – Declarar o registro Ficha de Cliente que tem a seguinte forma:

Nome:
Idade:
Ficha de Cliente
Endereço:
E-mail:
Data de nascimento:
CPF:
Altura:
Sexo:
Peso:
*/

/*
12 – Usando a estrutura definida no exercício anterior, faça:
a) Declarar uma variável do tipo Ficha de Cliente;
b) Ler os campos da ficha;
IMC*:*a ser calculado
c) Escrever os campos da ficha. Observe que o item Índice de Massa Corporal (IMC) precisará ser
calculado;
d) Ler uma variável denominada id. Depois comparar a variável id ao campo do registro nome;
*/

struct fichaCliente
{
    char nome[50], endereco[100], email[50], sexo;
    int idade, cpf, id;
    // data de nascimento
    int dia, mes, ano;
    float altura, peso, imc;
};
int main()
{
    struct fichaCliente cliente1;
    printf("Nome: ");
    fgets(cliente1.nome, sizeof(cliente1.nome), stdin);
    cliente1.nome[strcspn(cliente1.nome, "\n")] = '\0';

    printf("Endereço: ");
    fgets(cliente1.endereco, sizeof(cliente1.endereco), stdin);
    cliente1.endereco[strcspn(cliente1.endereco, "\n")] = '\0';

    printf("E-mail: ");
    fgets(cliente1.email, sizeof(cliente1.email), stdin);
    cliente1.email[strcspn(cliente1.email, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &cliente1.idade);

    printf("CPF: ");
    scanf("%d", &cliente1.cpf);

    printf("Sexo (M ou F): ");
    scanf("%s", &cliente1.sexo);

    printf("Data de nascimento: ");
    scanf("%d%d%d", &cliente1.dia, &cliente1.mes, &cliente1.ano);

    printf("Altura (metros): ");
    scanf("%f", &cliente1.altura);

    printf("Peso: ");
    scanf("%f", &cliente1.peso);

    printf("ID: ");
    scanf("%d", &cliente1.id);

    cliente1.imc = cliente1.peso / (cliente1.altura * cliente1.altura);
    printf("O ID %d pertence ao usuário %s.\nIMC: %.2f\n", cliente1.id,
           cliente1.nome, cliente1.imc);
    return 0;
}