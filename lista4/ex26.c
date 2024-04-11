/*
26) Construa um algoritmo que permita informar dados para 2 vetores inteiros de 20 posições e
apresente a intersecção dos vetores. Lembrando que a intersecção são os elementos repetidos
em ambos os vetores, mas sem repetição (cada número pode aparecer uma única vez).
*/

#include <stdio.h>
#define VEC_SIZE 20

int main() {
    int i, j, k, should_check_in_v2, v1[VEC_SIZE], v2[VEC_SIZE], intersection[VEC_SIZE];
 
    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite o %d° número do vetor 1: ", i+1);
        scanf("%d", &v1[i]);
    }
    printf("\n");
    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite o %d° número do vetor 2: ", i+1);
        scanf("%d", &v2[i]);
    }

    for (i=0, k=0; i<VEC_SIZE; i++) {
        should_check_in_v2 = 1;
        for (j=0; j<i; j++) {
            if (v1[j] == v1[i]) {
                should_check_in_v2 = 0;
                break;
            }
        }

        if (should_check_in_v2) {
            for(j=0; j<VEC_SIZE; j++) {
                if (v1[i] == v2[j]) {
                    intersection[k] = v1[i];
                    k++;
                    break;
                }
            }
        }
    }

    printf("A intersecção de v1 e v2 é: ");
    for(i=0; i<k; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");


    return 0;
}