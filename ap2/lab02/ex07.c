#include <stdio.h>
#include <string.h>

/*
7 - Crie uma struct para um Ponto2D com os campos x e y. Em seguida, crie uma struct Círculo que
tenha um campo do tipo Ponto2D (para o centro do círculo) e um campo raio (ponto flutuante).
Declare uma variável Círculo, preencha seus dados e exiba o centro (x e y) e o raio.
*/

struct Ponto2D
{
    float x, y;
};
struct Circulo
{
    struct Ponto2D ponto;
    float raio;
};
void main()
{
    struct Circulo circulo;
    printf("Valor de x: ");
    scanf("%f", &circulo.ponto.x);

    printf("Valor de y:");
    scanf("%f", &circulo.ponto.y);

    printf("Valor do raio: ");
    scanf("%f", &circulo.raio);

    // exibir
    printf("\n\n\nValor de x: %.2f\nValor de y: %.2f\nValor de raio: %.2f\n", circulo.ponto.x, circulo.ponto.y, circulo.raio);
}
