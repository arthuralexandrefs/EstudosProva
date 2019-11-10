#include <stdio.h>
int main()
{

    int qtd;

    printf("Digite um valor inteiro\n\n");
    scanf("%d", &qtd);

    for (int i = 0; i <= qtd; i++) {
        if (i % 2 == 0) {
            printf("\nNumero %d e par,", i);
        }
        else {
            printf("\nNumero %d e impar", i);
        }
        int escolha = 0;
        do {    
            printf("\nVoce deseja saber a tabuada? 1 para SIM - 2 para NAO \n");
            scanf ("%d", &escolha);
        } while (escolha != 1 && escolha != 2);
                
        if (escolha == 1) {
           for ( int j = 0; j <= 10; j++) {
               int resultado = i*j;
               printf ("%d x %d = %d\n", i, j, resultado);
           }
        }
    }
    return 0;
}

/*
Fazer um programa que recebe um valor N de quantidade do usuário

Para cada interação exibe se o numero é par ou impar, pergunta se o usuário quer a tabuada ou não desse numero e exibe

Ex:

Digite quantos numeros vc quer avaliar:
3

Número 0 é par, vc quer ver a tabuada? (1- Sim, 2- Não)
2
Número 1 é impar, vc quer ver a tabuada? (1- Sim, 2- Não)
2
Número 2 é par, vc quer ver a tabuada? (1- Sim, 2- Não)
2
Número 3 é impar, vc quer ver a tabuada? (1- Sim, 2- Não)
1
Tabuada do 3:
3 x 1 = 1
3 x 2 = 6
.......
3 x 10 = 30
*/