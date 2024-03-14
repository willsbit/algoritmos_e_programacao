/*
22. Faça um algoritmo que receba um número positivo e maior que zero, calcule e mostre:
a) O número digitado ao quadrado.
b) O número digitado ao cubo.
c) A raiz quadrada do número digitado.
d) A raiz cúbica do número digitado.
* UTILIZAR FUNÇÕES DA BIBLIOTECA <math.h>: pow(), sqrt() e cbrt(). 
*/

#include <stdio.h>
#include <math.h>

int main() {
    float number;

    printf("Digite um número > 0: ");
    scanf("%f", &number);

    printf("%f ^2 = %.2f \n", number, pow(number, 2));
    printf("%f ^3 = %.2f \n", number, pow(number, 3));
    printf("sqrt(%f) = %.2f \n", number, sqrt(number));
    printf("cbrt(%f) = %.2f \n", number, cbrt(number));

    return 0;
}