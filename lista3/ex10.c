/*
10. Escreva um algoritmo que receba números do usuário e imprima o triplo de cada número. O
algoritmo deve encerrar quando o número –999 for digitado.
*/

#include <stdio.h>

int main() {
    float n;
 
    while(1) {
        printf("Digite um número: ");
        scanf("%f", &n);
 
        if (n == -999) {
            break;
        }
 
        printf("%.2f * 3 = %.2f\n\n", n, n*3);
    }
    return 0;
}