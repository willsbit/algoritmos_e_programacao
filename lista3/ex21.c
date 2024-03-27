/*
21. Faça um algoritmo para ler um número inteiro n e exibir os 10 números ímpares anteriores, em
ordem decrescente.
*/

#include <stdio.h>
 
int main() {
    int n, i;
 
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    for(i=1; i<=10; i++) {
        if (n % 2 == 0) {
            printf("%d\n", (n - 1) - (2 * i));
        } else {
            printf("%d\n", n - (2*i));
        }
    }
 
    return 0;
}