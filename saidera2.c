#include <stdio.h>
int main ( ){

    int qtd, qtdPar = 0, qtdImpar = 0, somaIdades = 0;
    
    printf("Digite a quantidade de pessoas\n");
    scanf("%d", &qtd);

    for (int i = 1; i <= qtd; i++) {
        int idade;
        printf ("Digite a idade da %d pessoa", i);
        scanf ("%d", &idade );
        somaIdades = somaIdades + idade;
        if (idade % 2 == 0) {
            qtdPar = qtdPar + 1;
        } else {
            qtdImpar = qtdImpar +1;       
        }   
    } 
    printf("\n%d pessoas par!!!!", qtdPar);
    printf("\n%d pessoas impar!!!!", qtdImpar);
    printf("\nA soma das idades sera %d!!!!", somaIdades);
    return 0;
}



/*
Leia um numero N que representa uma quantidade de pessoas, para cada pessoa pergunte a idade, 
no final mostre quantas pessoas tem a idade par e quantas impar
Exiba tambem a soma da idade de TODAS as pessoas

Ex:
Quantas pessoas?
20

Qual a idade da 1 pessoa? 24
Qual a idade da 2 pessoa? 29
.
.
.
Qual a idade da 20 pessoa? 40

Resultados:
15 pessoas com idade impar
5 pessoas com idade par

Soma das idades: 689

*/