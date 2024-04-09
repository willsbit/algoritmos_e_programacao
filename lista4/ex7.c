/*
7) Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a
média da turma e contar quantos alunos obtiveram nota acima desta média calculada. Escrever a
média da turma e o resultado da contagem.
*/

#include <stdio.h>
#define VEC_SIZE 20
int main() {
 
    int i, acima_media = 0;
    float sum = 0, media, vec[VEC_SIZE];
 
    for (i=0; i<VEC_SIZE; i++) {
        printf("%d) Digite a nota: ", i + 1);
        scanf("%f", &vec[i]);
 
        sum += vec[i];
    }
 
    media = (float)sum / i;
 
    for (i=0; i<VEC_SIZE; i++) {
        if (vec[i] > media) {
            acima_media++;
        }
    }
 
    printf("A média das notas é: %.2f, e %d alunos estão acima da média.", media, acima_media);
 
 
    return 0;
}