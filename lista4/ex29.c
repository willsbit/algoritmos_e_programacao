/*
29) Escreva um algoritmo que leia um vetor com 15 posições para números inteiros. Depois da
leitura divida todos os seus elementos pelo maior valor do vetor. Imprima o vetor após os cálculos.
*/

#include <stdio.h>
#define VEC_SIZE 15

int main() {
    int i, max_value, v[VEC_SIZE];
    float v_div[VEC_SIZE];
 
    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite o %d° número do vetor 1: ", i+1);
        scanf("%d", &v[i]);

        if (i == 0) {max_value = v[i];}

        if (v[i] > max_value) {
            max_value = v[i];
        }
    }

    printf("O maior valor é %d\n", max_value);
    printf("Vetor v dividido por %d:\n: ", max_value);

    for(i=0; i<VEC_SIZE; i++) {
        v_div[i] = (float)v[i] / (float)max_value;
        printf("%f ", v_div[i]);
    }
    printf("\n");

    return 0;
}