#include <stdio.h>

/*
2. Faça um programa que renomeie o arquivo criado no exercício 1, para MATRICULADOS.TXT
*/

int main()
{
    FILE *TEXTO;
    TEXTO = fopen("dados.txt", "w");

    if (TEXTO == NULL)
    {
        printf("Erro.\n");
        return 1;
    }

    for (int i = 0; i <= 1000; i += 20)
    {
        fprintf(TEXTO, "%d\n", i);
    }
    fclose(TEXTO);

    int renomear = rename("dados.txt", "MATRICULADOS.TXT");
    if (renomear == 0)
    {
        printf("Arquivo renomeado.\n");
    }
    else
        printf("Arquivo criado!\n");
    return 0;
}