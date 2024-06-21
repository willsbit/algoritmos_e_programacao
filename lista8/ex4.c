/*
4) Faça uma função que lê 50 valores inteiros e retorna o maior deles.
*/

#include <stdio.h> 
#define N 50
 
int max(int numbers[N]) {
    int i, max_idx = 0;
 
    for(i=0; i<N; i++) {
        if (numbers[i] > numbers[max_idx]) {
            max_idx = i;
        }
    }
    
    return numbers[max_idx];
}
 
int main () {
    int numbers[N] = {1, 2, 3};
 
    printf("%d\n", max(numbers));
 
 
    return 0;
}