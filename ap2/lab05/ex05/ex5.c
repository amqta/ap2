#include "header.h"
#include <stdio.h>

int Fibonacci(int n) {

   /*
    F(n): Representa o n-ésimo termo da sequência.
    F(n-1): É o termo imediatamente anterior ao F(n).
    F(n-2): É o termo que vem antes de F(n-1).
   */ 
    if (n <= 1) // caso base
    {
        return n;
    } else // recursiva

    return Fibonacci(n-1) + Fibonacci(n-2);
    
}