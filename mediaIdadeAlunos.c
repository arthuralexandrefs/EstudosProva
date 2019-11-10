#include <stdio.h>

int main() {
    int qtdAlunos, somaNotas = 0;

    printf("Quantos alunos existem?");
    scanf("%d", &qtdAlunos);

    for (int indiceAluno = 0; indiceAluno < qtdAlunos; indiceAluno++) {
        printf("Digite a nota do aluno %d\n", indiceAluno + 1);
        int nota;
        scanf("%d", &nota);
        somaNotas = somaNotas + nota;
    }

    int media = somaNotas / qtdAlunos;

    printf("\n\n A média dos seus %d alunos foi de %d", qtdAlunos, media);
    
    return 0;
} 
