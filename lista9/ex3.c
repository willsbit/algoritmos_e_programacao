/*
Determinar o valor do elemento máximo de um vetor int v[100].
*/

#include <stdio.h>
#define N 100
 
int max(int v[N], int i) {
    int greatest;
    if (i == 1) {
        return v[i-1];
    } else {
        greatest = max(v, i - 1);
        if (greatest > v[i-1]) {
            return greatest;
        }
    }

    return greatest;
}
 
int main () {
    int v[N] = {268, 10, -689, 879, 5};
    printf("O maior elemento do vetor é %d\n", max(v, N));
    return 0;
}