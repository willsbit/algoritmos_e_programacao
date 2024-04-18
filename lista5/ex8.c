/*
8) Escrever um algoritmo que leia uma matriz 6x6 e encontre a linha que possui o menor valor
para a soma de todos os seus elementos. Se houver empate, informe todas as linhas que
obtiveram a menor soma.
*/

#include <stdio.h>
#define ROWS 6
#define COLUMNS 6

int main() {
    int i, j, k, matrix[ROWS][COLUMNS], sum, min_row_sum, min_rows[ROWS];
        
    for(i=0, k=0; i<ROWS; i++) {
        sum = 0;
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento M_%d_%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }

        if (i == 0) {
            min_row_sum = sum;
            min_rows[i] = i;
            }

        if (sum < min_row_sum) {
            k = 0;
            min_row_sum = sum;
            min_rows[k] = i;
            k++;
        } else if (sum == min_row_sum) {
            min_rows[k] = i;
            k++;
        }
    }

    printf("\n");
    printf("A soma mínima é %d\n", min_row_sum);

    for(i=0; i<k; i++) {
        printf("A linha %d tem soma mínima.\n", min_rows[i]);
    }

    return 0;
}
