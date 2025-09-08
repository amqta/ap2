#include "header.h"
#include <stdio.h>

void menu(float conta) {
    printf("Bem vindo(a)! Selecione sua escolha:\n1- Depósito\n2- Saque\n3- Consulta de saldo\n4- Sair\n");
    printf("\nValor na conta: %.2f\n", conta);
}