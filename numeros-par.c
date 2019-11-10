#include <stdio.h>
int main () {

    int qtd;
    printf("Digite a quantidade");
    scanf ("%d", &qtd);

    if (qtd % 2 != 0) {
        qtd++;
    }

    for (int i = 0; i <= qtd; i = i + 2) {
         printf ("%d\n", i); 
    }

    return 0;
}

/*
Pedir uma quantidade ao usuário e imprimir SOMENTE os numeros pares.
Ex:
Digite a quantidade:
2
Imprimindo Pares...
0
2

Se o cara digitar um numero impar o programa tem que ser capaz de resolver e considerar o PROXIMO valor par, ex:
Digite a quantidade:
3
Imprimindo Pares...
0
2
4

*/