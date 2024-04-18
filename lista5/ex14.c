/*
14) Escreva um algoritmo para ler uma matriz M 10x5. Encontre todos os números primos e efetue
a soma das suas posições. Uma soma para as linhas e outra para as colunas.
*/

#include <stdio.h>
#define ROWS 10
#define COLUMNS 5

int main() {
    int i, j, k, is_prime, a[ROWS][COLUMNS], sum_row_idx = 0, sum_col_idx = 0;

    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            is_prime = 1;
            printf("Digite elemento A_%d_%d: ", i, j);
            scanf("%d", &a[i][j]);

            for(k=2; k<((a[i][j])/2); k++) {
                if (a[i][j] % k == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime && (a[i][j] != 1 && a[i][j] != 0)) {
                sum_row_idx += i;
                sum_col_idx += j;
            }
        }
    }

    printf("\nA soma dos índices dos elementos primos é: m = %d, n = %d\n", sum_row_idx, sum_col_idx);

    return 0;
}