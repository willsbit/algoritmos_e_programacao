/*
9) Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de
divisores desse valor.
*/

#include <stdio.h>
 
int number_divisors(int n) {
    int i, counter = 2;
    for (i=2; i<=(n/2); i++) {
        if (n % i == 0) {
            counter++;
        } 
    }
    return counter;
}
 
int main () {
    int n;
 
    printf("Digite um número inteiro positivo:");
    scanf("%d", &n);
 
    printf("O número %d tem %d divisores.\n", n, number_divisors(n));
 
 
    return 0;
}