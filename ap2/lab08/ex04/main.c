#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
4. Faça um programa para incluir alunos no arquivo criado no Exercício 3, lembrando que não
podem existir dois alunos com o mesmo número de matrícula
*/

typedef struct
{
    char nome[50], curso[100];
    int matricula;
    float nota1, nota2;
} Aluno;

int matriculaExiste(int matricula);

int main()
{
    Aluno aluno;
    int c;
    char continuar;

    do
    {
        printf("\n--- Inclusão do novo aluno ---\n");

        while (1)
        {
            printf("Digite a Matrícula: ");
            if (scanf("%d", &aluno.matricula) != 1)
            {
                printf("Entrada inválida. Digite um número.\n");
                while ((c = getchar()) != '\n' && c != EOF)
                    ;
                continue;
            }
            while ((c = getchar()) != '\n' && c != EOF)
                ;

            if (matriculaExiste(aluno.matricula))
            {
                printf("ERRO: Matrícula %d já existe! Insira outra.\n", aluno.matricula);
            }
            else
            {
                break;
            }
        }

        printf("Nome: ");
        fgets(aluno.nome, 50, stdin);
        aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

        printf("Curso: ");
        fgets(aluno.curso, 100, stdin);
        aluno.curso[strcspn(aluno.curso, "\n")] = '\0';

        printf("Nota 1: ");
        scanf("%f", &aluno.nota1);
        while ((c = getchar()) != '\n' && c != EOF)
            ;

        printf("Nota 2: ");
        scanf("%f", &aluno.nota2);
        while ((c = getchar()) != '\n' && c != EOF)
            ;

        FILE *DATA = fopen("ALUNOS.DAT", "a");

        if (DATA == NULL)
        {
            printf("Erro crítico ao abrir o arquivo.\n");
            return 1;
        }
        fprintf(DATA, "\nAluno adicionado:\n");
        fprintf(DATA, "Matrícula: %d\n", aluno.matricula);
        fprintf(DATA, "Nome: %s\n", aluno.nome);
        fprintf(DATA, "Curso: %s\n", aluno.curso);
        fprintf(DATA, "Nota 1: %.1f\n", aluno.nota1);
        fprintf(DATA, "Nota 2: %.1f\n", aluno.nota2);

        fclose(DATA);
        printf("\nAluno '%s' cadastrado com sucesso!\n", aluno.nome);

        printf("\nDeseja incluir outro aluno? (s/n): ");
        scanf(" %c", &continuar);
        while ((c = getchar()) != '\n' && c != EOF)
            ;

    } while (continuar == 's' || continuar == 'S');

    printf("\nPrograma finalizado.\n");
    return 0;
}

int matriculaExiste(int matricula)
{
    FILE *arquivo = fopen("ALUNOS.DAT", "r");
    if (arquivo == NULL)
    {
        return 0;
    }

    char linha[256];
    int matricula_lida_do_arquivo;

    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        if (sscanf(linha, "Matrícula: %d", &matricula_lida_do_arquivo) == 1)
        {
            if (matricula_lida_do_arquivo == matricula)
            {
                fclose(arquivo);
                return 1;
            }
        }
    }

    fclose(arquivo);
    return 0;
}