#include <stdio.h>
#include <string.h>

/*
6 - Crie uma struct Autor com os campos nome e nacionalidade. Depois, crie uma struct Livro com
os campos título, ano de publicação e um campo do tipo Autor. Declare uma variável do tipo Livro,
preencha os dados e exiba as informações completas do livro, incluindo o nome e a nacionalidade do
autor.
*/

struct Autor
{
    char nome[50], nacionalidade[30];
};

struct Livro
{
    char titulo[50];
    int ano;
    struct Autor autor;
};

void main()
{
    struct Livro livro;
    printf("Título: ");
    fgets(livro.titulo, sizeof(livro.titulo), stdin);

    printf("Ano do livro: ");
    scanf("%d", &livro.ano);
    getchar();

    printf("Autor: ");
    fgets(livro.autor.nome, sizeof(livro.autor.nome), stdin);

    printf("Nacionalidade do autor: ");
    fgets(livro.autor.nacionalidade, sizeof(livro.autor.nacionalidade), stdin);

    printf("\n\nTítulo do livro: %sAno do livro: %d\nAutor: %sNacionalidade do autor: %s", livro.titulo, livro.ano, livro.autor.nome,
           livro.autor.nacionalidade);
}