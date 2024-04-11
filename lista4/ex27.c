/*
27) Construa um algoritmo que permita informar dados para 2 vetores inteiros de 20 posições, e
apresente o conjunto união dos vetores. Lembrando que o conjunto união são todos os elementos
que existem em ambos os vetores, mas sem repetição (cada número pode aparecer um única vez
no resultado)
*/

#include <stdio.h>
#define VEC_SIZE 20

int main() {
    int i, j, k, should_push = 1, v1[VEC_SIZE], v2[VEC_SIZE], u[2*VEC_SIZE];
 
    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite o %d° número do vetor 1: ", i+1);
        scanf("%d", &v1[i]);
        u[i] = v1[i];
    }

    printf("\n");
    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite o %d° número do vetor 2: ", i+1);
        scanf("%d", &v2[i]);
        u[VEC_SIZE + i] = v2[i]; // ter u = todos os elementos em v1 e v2, podendo ter repetição
    }

    // remover elementos repetidos de u
    for(i=0, k=0; i < 2 * VEC_SIZE; i++) {
        should_push = 1;
        for(j=(i-1); j>=0; j--) {
            if (u[j] == u[i]) {
                should_push = 0;
                break;
            }
        }
        if(should_push) {
            u[k] = u[i];
            k++;
        }
    }

    for (i=0; i<k; i++) {
        printf("%d ", u[i]);
    }

    return 0;
}