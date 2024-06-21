/*
Criar uma função para calcular a série de Fibonacci de
um determinado número passado como parâmetro.
*/

#include <stdio.h>
 
int fib(int n) {
    int sum = 0;
    if (n > 1) {
        sum += fib(n-1) + fib(n-2);
        return sum;
    }
 
    return 1;
}
 
 
int main () {
    printf("fib(5) = %d\n", fib(5));
    return 0;
}