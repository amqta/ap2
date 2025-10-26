#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[50], curso[100];
    int matricula;
    float nota1, nota2;
} Aluno;

int matriculaExiste(int matricula);
int lerProximoAluno(FILE *arquivo, Aluno *aluno);
void escreverAluno(FILE *arquivo, Aluno aluno);

int main()
{
    int c;
    Aluno aluno;
    float novaNota1, novaNota2;
    int matriculaParaAlterar;

    printf("Insira a matrícula do aluno que terá a nota alterada: ");
    while (1)
    {
        if (scanf("%d", &matriculaParaAlterar) != 1)
        {
            printf("Entrada inválida. Digite um NÚMERO: ");
        }
        else
        {
            if (matriculaExiste(matriculaParaAlterar))
            {
                break;
            }
            else
            {
                printf("Essa matrícula não existe, insira uma válida: ");
            }
        }
        while ((c = getchar()) != '\n' && c != EOF)
            ;
    }
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    printf("Matrícula %d encontrada.\n", matriculaParaAlterar);
    printf("Insira a nova nota 1: ");
    scanf("%f", &novaNota1);
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    printf("Insira a nova nota 2: ");
    scanf("%f", &novaNota2);
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    FILE *DATA = fopen("ALUNOS.DAT", "r");
    if (DATA == NULL)
    {
        printf("Erro ao abrir o arquivo original.\n");
        return 1;
    }

    FILE *TEMP_DATA = fopen("TEMP_ALUNOS.DAT", "w");
    if (TEMP_DATA == NULL)
    {
        printf("Erro ao criar o arquivo temporário.\n");
        fclose(DATA);
        return 1;
    }

    while (lerProximoAluno(DATA, &aluno))
    {
        if (aluno.matricula == matriculaParaAlterar)
        {
            aluno.nota1 = novaNota1;
            aluno.nota2 = novaNota2;
        }
        escreverAluno(TEMP_DATA, aluno);
    }

    fclose(DATA);
    fclose(TEMP_DATA);

    remove("ALUNOS.DAT");
    rename("TEMP_ALUNOS.DAT", "ALUNOS.DAT");

    printf("\nNotas do aluno %d alteradas com sucesso!\n", matriculaParaAlterar);

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
    int matriculaLida;

    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        if (sscanf(linha, "Matrícula: %d", &matriculaLida) == 1)
        {
            if (matriculaLida == matricula)
            {
                fclose(arquivo);
                return 1;
            }
        }
    }
    fclose(arquivo);
    return 0;
}

int lerProximoAluno(FILE *arquivo, Aluno *aluno)
{
    char linha[256];

    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        if (strstr(linha, "Aluno") != NULL)
        {
            if (fgets(linha, sizeof(linha), arquivo) == NULL)
                return 0;
            sscanf(linha, "Matrícula: %d", &aluno->matricula);

            if (fgets(linha, sizeof(linha), arquivo) == NULL)
                return 0;
            sscanf(linha, "Nome: %[^\n]", aluno->nome);

            if (fgets(linha, sizeof(linha), arquivo) == NULL)
                return 0;
            sscanf(linha, "Curso: %[^\n]", aluno->curso);

            if (fgets(linha, sizeof(linha), arquivo) == NULL)
                return 0;
            sscanf(linha, "Nota 1: %f", &aluno->nota1);

            if (fgets(linha, sizeof(linha), arquivo) == NULL)
                return 0;
            sscanf(linha, "Nota 2: %f", &aluno->nota2);

            return 1;
        }
    }
    return 0;
}

void escreverAluno(FILE *arquivo, Aluno aluno)
{
    fprintf(arquivo, "\n--- Aluno ---\n");
    fprintf(arquivo, "Matrícula: %d\n", aluno.matricula);
    fprintf(arquivo, "Nome: %s\n", aluno.nome);
    fprintf(arquivo, "Curso: %s\n", aluno.curso);
    fprintf(arquivo, "Nota 1: %.1f\n", aluno.nota1);
    fprintf(arquivo, "Nota 2: %.1f\n", aluno.nota2);
}