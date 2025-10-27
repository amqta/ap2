#include <stdio.h>
#include <string.h>
#include <locale.h>

/*
13 – Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter
a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
a) Declare duas variáveis x e y.
b) Faça a leitura dos campos das variáveis x e y.
c) Encontre o aluno com maior nota da primeira prova.
d) Encontre o aluno com maior média geral.
e) Encontre o aluno com menor média geral.
f) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprova
ção.
*/

struct aluno
{
    int matricula;
    char nome[50];
    float nota1, nota2, nota3, media;
};
int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct aluno x, y;
    // primeiro aluno
    printf("Matrícula do primeiro aluno: ");
    scanf("%d", &x.matricula);
    getchar();

    printf("Nome do primeiro aluno: ");
    fgets(x.nome, sizeof(x.nome), stdin);
    x.nome[strcspn(x.nome, "\n")] = '\0';

    printf("Primeira nota: ");
    scanf("%f", &x.nota1);

    printf("Segunda nota: ");
    scanf("%f", &x.nota2);

    printf("Terceira nota: ");
    scanf("%f", &x.nota3);
    // segundo aluno
    printf("Matrícula do segundo aluno: ");
    scanf("%d", &y.matricula);
    getchar();

    printf("Nome do segundo aluno: ");
    fgets(y.nome, sizeof(y.nome), stdin);
    y.nome[strcspn(y.nome, "\n")] = '\0';

    printf("Primeira nota: ");
    scanf("%f", &y.nota1);

    printf("Segunda nota: ");
    scanf("%f", &y.nota2);

    printf("Terceira nota: ");
    scanf("%f", &y.nota3);
    // maior nota
    if (x.nota1 > y.nota1)
    {
        printf("%s possui a maior nota da primeira prova.\n", x.nome);
    }
    else if (y.nota1 > x.nota1)
    {
        printf("%s possui a maior nota da primeira prova.\n", y.nome);
    }
    else
    {
        printf("As notas da primeira prova de ambos os alunos são iguais.\n");
    }
    // maior e menor média
    x.media = (x.nota1 + x.nota2 + x.nota3) / 3;
    y.media = (y.nota1 + y.nota2 + y.nota3) / 3;
    float maiorMedia, menorMedia;
    if (x.media > y.media)
    {
        printf("A média de %s é maior que a de %s.\n", x.nome, y.nome);
        maiorMedia = x.media;
        menorMedia = y.media;
    }
    else if (y.media > x.media)
    {
        printf("A média de %s é maior que a de %s.\n", y.nome, x.nome);
        maiorMedia = x.media;
        menorMedia = y.media;
    }
    else
    {
        printf("As médias são iguais.\n");
    }
    if (x.media > y.media)
    {
        printf("Maior média: %.2f, do aluno de matrícula %d\n", maiorMedia,
               x.matricula);
        printf("Menor média: %.2f, do aluno de matrícula %d\n", menorMedia,
               y.matricula);
    }
    else
    {
        printf("Maior média: %.2f, do aluno de matrícula %d\n", maiorMedia,
               y.matricula);
        printf("Menor média: %.2f, do aluno de matrícula %d\n", menorMedia,
               x.matricula);
    }
    if (x.media >= 6.0)
    {
        printf("%s, de matrícula %d, foi aprovado(a).\n", x.nome, x.matricula);
    }
    else
    {
        printf("%s, de matrícula %d, foi reprovado(a).\n", x.nome, x.matricula);
    }
    if (y.media >= 6.0)
    {
        printf("%s, de matrícula %d, foi aprovado(a)", y.nome, y.matricula);
    }
    else
    {
        printf("%s, de matrícula %d, foi reprovado(a)", y.nome, y.matricula);
    }
    return 0;
}