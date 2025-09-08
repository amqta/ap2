#include "header.h"
#include <stdio.h>

int eh_triangulo(int a, int b, int c)
{
    // ver se existe
    while (a + b < c || a + c < b || b + c < a)
    {
        printf("O triângulo não existe.\n");
        printf("1o lado: ");
        scanf("%d", &a);
        printf("2o lado: ");
        scanf("%d", &b);
        printf("3o lado: ");
        scanf("%d", &c);
    }
    if (a != b && b != c && a != c)
    {
        return 1;
    }
    else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
    {
        return 2;
    }
    else if (a == b && b == c)
    {
        return 3;
    }
    return 0;
}