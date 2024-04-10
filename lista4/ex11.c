/*
11) Faça um algoritmo que leia um código numérico inteiro e um vetor de 50 posições de números
reais. Se o código for zero, termine o algoritmo. Se o código for 1, mostre o vetor na ordem direta.
Se o código for 2, mostre o vetor na ordem inversa.
*/

#include <stdio.h>
#define VEC_SIZE 50

int main() {
    int i, codigo;
    float vec[VEC_SIZE];

    printf("Digite o código numérico inteiro (0 | 1 | 2): ");
    scanf("%d", &codigo);

    for(i=0; i<VEC_SIZE; i++) {
        printf("%d) Digite o valor: ", i+1);
        scanf("%f", &vec[i]);
    }

    if (codigo == 1) {
        for(i=0; i<VEC_SIZE; i++) {
            printf("%f, ", vec[i]);
        } 
    } else if (codigo == 2) {
        for(i=(VEC_SIZE-1); i>=0; i--) {
            printf("%f, ", vec[i]);
        }
    } else if (codigo == 0) {
        {};
    } else {
        printf("Código inválido. \n");
    }


    return 0;
}