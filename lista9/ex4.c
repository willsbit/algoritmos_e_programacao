/*
Fazer a soma de todos os valores de um vetor int v[100].
*/

#include <stdio.h>
#define N 100
 
int sum(int v[N], int i) {
    if (i > 0) {
        return sum(v, i-1) + v[i-1];
    }
 
    return 0;
}
 
int main () {
    int v[N] = {1, 2, 3, 4, 5};
    printf("A soma dos elementos do vetor é %d\n", sum(v, N));
    return 0;
}