/*
27) Leia uma matriz 100 x 10 que se refere respostas de 10 questões de múltipla escolha,
referentes a 100 alunos. Leia também um vetor de 10 posições contendo o gabarito d e respostas
que podem ser a, b, c ou d. Seu algoritmo deverá comparar as respostas de cada candidato com
o gabarito e emitir um vetor Resultado, contendo a pontuação correspondente.
*/

#include <stdio.h>
#define ROWS 100
#define COLUMNS 10

int main() {
    int i, j, pontuacao[ROWS] = {0}; 
    char a[ROWS][COLUMNS], g[COLUMNS];

    for(i=0; i<(ROWS); i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Aluno %d, questão %d:", i+1, j+1);
            scanf(" %c", &a[i][j]);
        }
    }

    printf("\nAgora, digite o vetor resposta.\n");
    for(j=0; j<COLUMNS; j++) {
        printf("Gabarito, questão %d: ", j+1);
        scanf(" %c", &g[j]);
    }

    printf("\n---- Notas finais ----\n");
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            if(a[i][j] == g[j]) {
                pontuacao[i] += 1;
            }
        }
        printf("Aluno %d -- Nota %d\n", i+1, pontuacao[i]);
    }
    

    return 0;
}