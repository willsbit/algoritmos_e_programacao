/*
Crie uma função para calcular o MDC (Máximo Divisor
Comum) de dois números passados por parâmetro:

mdc (x, y) =
{
y, se x>= y e (x resto y) = 0
mdc(y,x),  se x < y
mdc(y, (x resto y)) caso contrário
}
Exemplo: mdc(9,6) retorna 3.
*/

#include <stdio.h>
 
int mdc(int x, int y) {
    if (x >= y && (x % y) == 0) {
        return y;
    } else if (x < y) {
        return mdc(y, x);
    }
    
    return mdc(y, (x % y));
}
 
 
int main () {
    printf("mdc(9, 6) = %d\n", mdc(9, 6));
    return 0;
}