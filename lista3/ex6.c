/*
6. Escreva um algoritmo que leia um valor n, inteiro e positivo, calcule e mostre a seguinte soma:
S = 1 + 1/2 + 1/3 + 1/4 + … + 1/n 
*/

#include <stdio.h> 

int main() {
    int n;
    float quotient;
    float sum = 0;
    printf("Digite o valor de n da série: ");
    scanf("%d", &n);
 
    for(quotient=1; quotient<=n; quotient++) {
        sum = sum + (1 / quotient);
    }
 
    printf("A soma 1 + 1/2 + ... + 1/n é: %f", sum);
    return 0;
}