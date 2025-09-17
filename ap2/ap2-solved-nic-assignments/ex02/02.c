/*

Dada a seguinte função recursiva:

int PROVA(int a, int b){
    if(b==0){
        return a;
    } else{
        return PROVA(b, a % b);
    }
}

Seja a = 58 e b = 12, temos a seguinte configuração:

Número      Chamada	        Valor	            Retorno
1	        PROVA(58,12)	a = 58, b = 12	    PROVA(12,10)
2	        PROVA(12,10)	a = 12, b = 10	    PROVA(10,2)
3	        PROVA(10,2)	    a = 10, b = 2	    PROVA(5,0)
4	        PROVA(5,0)	    a = 5, b = 0	    5
Para a = 73 e b = 13, faça outro quadro.

-------------------------------------------------------------

Resolução:

Número      Chamada	        Valor	            Retorno
1           PROVA(73,13)    a = 73, b = 13      PROVA(13, 8)   
2           PROVA(13,8)     a = 13, b = 8       PROVA(8, 5)    
3           PROVA(8,5)      a = 8, b = 5        PROVA(5, 3)
4           PROVA(5,3)      a = 5, b = 3        PROVA(3, 2)
5           PROVA(3,2)      a = 3, b = 2        PROVA(2, 1)
6           PROVA(2,1)      a = 2, b = 1        PROVA(1, 0)
7           PROVA(1,0)      a = 1, b = 0        1

*/