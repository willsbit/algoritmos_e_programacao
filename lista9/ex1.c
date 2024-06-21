/*
Criar um algoritmo de contagem regressiva! Dado um parâmetro inteiro, ele vai decrementado até chegar no valor 0.
*/

#include <stdio.h>
 
void countdown(int param) {
    if (param >= 0) {
        printf("%d\n", param);
        countdown(param - 1);
    }
}
 
int main () {
    countdown(5);
    return 0;
}