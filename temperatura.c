#include <stdio.h>
int main (){

    int dias;

    printf("Digite a quantidade de dias\n");
    scanf("%d", &dias);

    for ( int i = 1; i >= dias; i++ ) {
        int tc, tf;
        printf("Digite a temperatura do %d o dia\n", i); 
        scanf("%d", &tf);
        tc = tf - 32;
        printf("temperatura do %d o dia, em celsius eh: %d , e a Temperatura em Fahrenheit %d \n", i, tc, tf);
    }
    

    return 0;
}











/*
    Fazer um programa em C para ler a temperatura em graus Fahrenheit num período de N dias (N eh escolhido pelo usuário). Para cada temperatura, transformá-la para 
    graus Celsius: ). 
    
    Em seguida, converter para celsius e exibir

    Ex:
    Digite quantos dias vc quer saber o clima em fahrenheit:
    5
    Digite a temperatura do 1 dia:
    70
    Tempratura em Celsius X
    Digite a temperatura do 2 dia:
    80
    Tempratura em Celsius X
    Digite a temperatura do 3 dia:
    70
    Tempratura em Celsius X
    Digite a temperatura do 4 dia:
    60
    Tempratura em Celsius X
    Digite a temperatura do 5 dia:
    65
    Tempratura em Celsius X
*/


