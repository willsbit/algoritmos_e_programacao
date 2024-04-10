/*
14) Elabore um algoritmo que leia 50 números inteiros e obtenha qual o tamanho da maior
sequencia consecutiva de números em ordem crescente.
*/

#include <stdio.h>
#define VEC_SIZE 50
 
int main() {
    int i, vec[VEC_SIZE], seq = 1, max_seq = 1, idx_min = 0, idx_max = 0;
 
    for(i=0; i<VEC_SIZE; i++) {
        printf("\nDigite o %d° número: ", i+1);
        scanf("%d", &vec[i]);
    
        if (i > 0 && vec[i-1] == vec[i] - 1) {
            seq++;
            if(seq > max_seq) {max_seq = seq;}
        } else {
            seq = 1;
        }
 
        if (seq == max_seq) {
            idx_min = i - seq + 1;
            idx_max = i;
        }
        
    }
 
    if (max_seq > 1) {
        printf("A maior sequência de números em ordem crescente é: ");
        for(i=idx_min; i<=idx_max; i++) {
            printf("%d ", vec[i]);
        }
        printf("\n");
    } else {
        printf("Não há números consecutivos em ordem crescente na sequência.\n");
    }
    return 0;
}