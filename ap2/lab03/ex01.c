
/*
1 – Em linguagem C, a organização de programas em módulos e o uso de funções permitem melhor 
estruturação e reutilização do código. Nesse contexto: 
a) Explique a diferença entre variáveis globais e variáveis locais, destacando o escopo e o tempo de 
vida de cada uma. 
b) Por que é considerado uma boa prática limitar o uso de variáveis globais em programas em C?
*/

/* 
1. a) As variáveis globais possuem uma "existência" de maior permanência, 
onde pode ser acessada por qualquer função em um código. Já as variáveis 
locais só podem ser acessadas dentro de um determinado escopo, seja dentro de 
uma função, ou até mesmo de um "for". 

1. b) Porque diferentemente de variáveis locais, elas continuam existindo 
após o fechamento dos escopos, continuando ocupando memória. Com isso, é bom 
que a menor quantia de variáveis globais continue existindo, alocando menos 
espaço na memória para elas.
*/