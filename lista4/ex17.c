/*
17) Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor
do maior elemento de Q e a respectiva posição que ele ocupa no vetor.
*/

#include <stdio.h>
#define VEC_SIZE 20

int main() {
    int i, idx_max=0;
    float max=0, vec[VEC_SIZE];

    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite o %dº número do vetor: ", i+1);
        scanf("%f", &vec[i]);

        if (vec[i] <= 0) {
            printf("Apenas números positivos!\n\n");
            i--;
            continue;
        }

        if (vec[i] > max) {
            max = vec[i];
            idx_max = i;
        }
    }

    printf("O valor máximo é %.2f, que ocorre na posição vec[%d]\n", max, idx_max);



    return 0;
}
