#include <stdio.h>

/*
9 – A partir do trecho de código abaixo, complete o programa criando as funções que faltam, inclu
sive, a função main( ).
 #include <stdio.h>

typedef struct{
   int matricula;
   float notas[3];
}aluno;

aluno g_turma[5];

void le_aluno ( );
void imprime_turma( );
float calcula_media_aluno( );

int main()
{
    aluno g_turma[5];

    for(i=0; i< 5; i++)
    {
        le_aluno( );  // função que lê de teclado
                           // os dados do aluno

    }
    imprime_turma ( ); //Função que imprime os dados de todos os alunos


    for(i=0; i< 5; i++)
    {
        media = calcula_media_aluno( );// função que calcula a média das notas de um aluno

        printf("Aluno %d  - Media = %f\n"); // imprime os dados do aluno

    }
    return 0;
}
*/

float media;
int i;

typedef struct
{
    int matricula;
    float notas[3];
} aluno;

aluno g_turma[5];

void le_aluno()
{
    printf("Matrícula: ");
    scanf("%d", &g_turma[i].matricula);
    for (int j = 0; j < 3; j++)
    {
        printf("Nota %d: ", j + 1);
        scanf("%f", &g_turma[i].notas[j]);
    }
}
void imprime_turma()
{
    for (i = 0; i < 5; i++)
    {
        printf("\nMatrícula: %d\nNota 1: %.1f\nNota 2: %.1f\nNota 3: %.1f\n",
               g_turma[i].matricula, g_turma[i].notas[0], g_turma[i].notas[1],
               g_turma[i].notas[2]);
    }
}
float calcula_media_aluno()
{
    return (g_turma[i].notas[0] + g_turma[i].notas[1] + g_turma[i].notas[2]) /
           3;
}

int main()
{
    for (i = 0; i < 5; i++)
    {
        le_aluno(); // função que lê de teclado
                    // os dados do aluno
    }
    imprime_turma(); // Função que imprime os dados de todos os alunos

    for (i = 0; i < 5; i++)
    {
        media = calcula_media_aluno(); // função que calcula a média das notas de um aluno

        printf("Aluno %d  - Media = %.1f\n", g_turma[i].matricula, media); // imprime os dados do aluno
    }
    return 0;
}