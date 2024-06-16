/*
22) Escreva um algoritmo no qual seja chamada uma função que receba como parâmetro um ano
e retorne 1 se o ano for bissexto, e 0 caso contrário. São bissextos todos os anos não seculares
divisíveis por 4 (mas não por 100) e os anos divisíveis por 400.
*/

#include <stdio.h>

int is_leap_year(int x) {
    if ((x % 400) == 0) {
        return 1;
    } else if ((x % 4) == 0 && (x % 100) != 0) {
        return 1;
    }

    return 0;
}



int main() {
    int x;

    printf("Digite ano: ");
    scanf("%d", &x);
    

    if (is_leap_year(x)) {
        printf("O ano %d é bissexto.\n", x);
    } else {
        printf("O ano %d não é bissexto.\n", x);
    }

    return 0;
}