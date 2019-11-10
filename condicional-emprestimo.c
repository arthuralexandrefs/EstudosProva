#include <stdio.h>
int main () {
    double salario, prestacao, vintePorCentoSalario;

    printf("Digite o Salario\n");
    scanf("%d", &salario);


    printf("Digite o valor mensal da prestacao\n");
    scanf("%d", &prestacao);

    printf("Seu salario e de: %d , e sua prestacao e de: %d\n\n", salario, prestacao);

    vintePorCentoSalario = salario * 20 / 100;
    
    if (vintePorCentoSalario > prestacao) {         
        printf("Emprestimo nao concedido");
    } else { 
        printf("Parabens! Voce conseguiu o emprestimo!!");
    }

    return 0;
}
