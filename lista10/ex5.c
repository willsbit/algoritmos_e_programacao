/*
Crie uma função que efetue a troca de dois valores inteiros, seguindo o protóJpo:
void troca(int* valor1, int* valor2).
*/

#include <stdio.h>
 
void troca(int *valor1, int *valor2) {
    int swap = *valor1;
    *valor1 = *valor2;
    *valor2 = swap;
}
 
int main () {
    int x = 5, y = 10;
 
    troca(&x, &y);
    printf("x: %d, y: %d\n", x, y);
 
    return 0;
}