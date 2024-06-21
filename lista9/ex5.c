/*
Descreva uma função para calcular exponenciação (base 2). 
Exemplo: 23 = 2 * 2 * 2 = 8
*/

#include <stdio.h>
 
int pow2(int n) {
    if (n > 0) {
        return 2 * pow2(n-1);
    }
    return 1;
}
 
int main () {
    printf("2^10 = %d\n", pow2(10));
    return 0;
}