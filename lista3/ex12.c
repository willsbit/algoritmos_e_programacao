/*
12. A conversão de graus Fahrenheit para centígrados é obtida por C = 5/9(F – 32). Faça um
algoritmo que calcule e escreva uma tabela de graus centígrados em função de graus Fahrenheit,
variando um a um de 50 a 150 graus Fahrenheit.
*/

#include <stdio.h>

int main() {
    int deg_f_start = 50;
    int deg_f_end = 150;
    float deg_f, deg_celsius;
 
    printf("|°F\t|°C\t|\n");
    for(deg_f=deg_f_start; deg_f<=deg_f_end; deg_f++) {
        deg_celsius = ((deg_f - 32) * 5) / 9;
        printf("|%.0f\t|%f\t|\n", deg_f, deg_celsius);
    }
 
    return 0;
}