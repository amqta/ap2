
#include "header.h"
#include <stdio.h>

int eh_primo(int num)
{
    if (num <= 1) {
        return 1;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0)
        {
            return 1;
        }
    }
    return 0;
}