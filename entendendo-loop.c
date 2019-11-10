#include <stdio.h>
int main () {

    int qtd;
    printf("Digite quantos numeros deseja imprimir\n");
    scanf("%d", &qtd);

    
    int opcao = 0;
    do {
        printf("Exibir em \n 1 - Crescente \n 2 - Decrescente\n");
        scanf("%d", &opcao);
    } while (opcao != 1 && opcao != 2);


    if (opcao == 1) {
        for (int i = 0; i <= qtd; i++) {
            printf ("%d\n", i);   
        }

    } else {
        for (int i = qtd; i >= 0; i--) {
            printf ("%d\n", i);
        }
    }

    return 0;
}

/*
    Pedir ao usuário quantos números serão impressos, ex: 30
    Perguntar ao usuário se ele quer imprimir em order crescente ou decrescente.

    Se for crescente imprimir 0..30
    Se for decrescente imprimir 30..0
*/