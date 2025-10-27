/*
2 – Como declarar uma struct em C?
*/

/*
Deve-se criar a estrutura e, em seguida, inserir suas variáveis. Com isso, é
possível definir uma variável com o tipo criado.
*/
struct ficha
{
    int ano_ingresso, matricula;
    char nome[50], curso[30];
    float media, indice_prioridade;
};
void main()
{
    struct ficha matricula;
    return 0;
}