/*
19. Fazer um algoritmo que calcule e escreva o valor de S onde:
S = 1/1 - 2/4 + 3/9 - 4/16 + 5/25 - 6/36... - 10/100
*/

#include <stdio.h>
#include <math.h>
 
int main() {
    float s = 0;
    float nth_term;
    
    for(nth_term=1; nth_term<=10; nth_term++) {
        s += ((nth_term / pow(nth_term, 2)) * pow(-1, nth_term+1));
    }
 
    printf("A soma é S = %.3f", s);
 
    return 0;
}