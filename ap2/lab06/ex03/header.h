#ifndef HEADER_H
#define HEADER_H

typedef struct
{
    char nome[100];
    int idade;
    char sexo;
    float salario;
    int numFilhos;
} habitante;

void altera(habitante *x);
void exibe(habitante *x);

#endif // HEADER_H