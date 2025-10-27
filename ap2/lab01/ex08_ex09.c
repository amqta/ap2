#include <stdio.h>
#include <string.h>

/*
8 – Crie uma struct para controlar ações de uma bolsa de valores com as seguintes informações:
• Nome da companhia
• Área de atuação da companhia
• Valor atual da ação (em reais)
• Valor anterior
• Variação da ação em porcentagem (double), ou seja, quanto a ação cresceu ou caiu desde a
abertura da bolsa no dia.
*/

/*
9 – Faça um programa que:
a) Preencha os campos da struct do exercício anterior
b) Imprima os campos da struct do exercício anterior
*/

struct BolsaDeValores
{
    char nome[50], areaAtuacao[30];
    float valorAtual, valorAnterior;
    double variacao;
};
int main()
{
    struct BolsaDeValores empresa1;
    printf("Qual o nome da empresa? ");
    fgets(empresa1.nome, sizeof(empresa1.nome), stdin);
    empresa1.nome[strcspn(empresa1.nome, "\n")] = '\0';
    printf("Qual sua área de atuacao? ");
    fgets(empresa1.areaAtuacao, sizeof(empresa1.areaAtuacao), stdin);
    empresa1.areaAtuacao[strcspn(empresa1.areaAtuacao, "\n")] = '\0';
    printf("Qual seu valor atual, em reais? ");
    scanf("%f", &empresa1.valorAtual);
    printf("Qual seu valor anterior, em reais? ");
    scanf("%f", &empresa1.valorAnterior);
    printf("Qual a variacao da acao, em porcentagem? ");
    scanf("%lf", &empresa1.variacao);
    printf("\n\nInformacoes da empresa:\n");
    printf("Nome da empresa: %s\n", empresa1.nome);
    printf("Area de atuação da empresa: %s\n", empresa1.areaAtuacao);
    printf("Valor atual da empresa (R$): %.2f\n", empresa1.valorAtual);
    printf("Valor anterior da empresa (R$): %.2f\n", empresa1.valorAnterior);
    printf("Variacao da acao (%%): %.2lf%%", empresa1.variacao);
    return 0;
}