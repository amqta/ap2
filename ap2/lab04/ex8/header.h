#ifndef HEADER_H
#define HEADER_H
#define MINIMO 5

// na tabela tenho que imprimir 3 clientes
struct cliente
{
    int horas;
    float total; // valor + MINIMO
};
void tabela(struct cliente cliente[]);
void calculaTaxa(struct cliente cliente[]);

#endif // HEADER_H