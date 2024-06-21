/*
10) Leia um vetor de 10 posições e um determinado valor X. Passe o vetor e este número para
uma função, que deve verificar quantas vezes este valor X aparece no vetor. Retornar o resultado
para a função main, exibindo o mesmo.
*/

#include <stdio.h>
# define N 10
 
int count_occurences(int vec[N], int x) {
    int i, counter = 0;
    for (i=0; i<N; i++) {
        if (vec[i] == x) {
            counter++;
        } 
    }
    return counter;
}
 
int main () {
    int i, x, vec[N];
 
    for (i=0; i<N; i++) {
        printf("Digite o elemento #%d do vetor:", i);
        scanf("%d", &vec[i]);
    }
 
    printf("\nDigite o número para buscar:");
    scanf("%d", &x);
 
    printf("\nO número %d aparece %d vezes no vetor.\n", x, count_occurences(vec, x));
 
 
    return 0;
}