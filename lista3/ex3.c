/*
3. Elabore um algoritmo que solicite que o usuário entre com 20 números inteiros quaisquer.
Imprima a soma dos números digitados. */

#include <stdio.h> 

int main() {
    int contador = 0;
    float n, sum;
 
    sum = 0;
    while(contador < 20) {
        printf("Entre o %d-ésimo número: ", contador+1);
        scanf("%f", &n);
        sum += n;
 
        contador++;
    }
 
    printf("A soma dos números digitados é %f", sum);
 
    return 0;
}