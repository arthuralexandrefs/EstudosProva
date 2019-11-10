#include <stdio.h>

int main() {

    int entrada;

    printf("Digite a tabuada na qual voce deseja saber o resultado");
    scanf("%d", &entrada); 

    for (int i = 1; i <= 10; i++) {
        int resultado = entrada * i;
        printf ("\n%d x %d = %d\n", entrada, i, resultado);
    }
}


/*
    Faça um programa que receba um número e mostre a tabuada até 10 deste número. Ex:
    Digite um numero: 2
    2 x 1 = 2
    2 x 2 = 4
    2 x 3 = 6
    .
    .
    .
    2 x 10 = 20 
*/
