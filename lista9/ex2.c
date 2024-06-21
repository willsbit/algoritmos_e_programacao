/*
Realizar a soma dos 100 primeiros números inteiros.
*/

#include <stdio.h>
 
int sum(int n) {
    if (n >= 0) {
        return n + sum(n-1);
    }
 
    return 0;
}
 
int main () {
    printf("A soma dos 100 primeiros números inteiros é %d\n", sum(100));
    return 0;
}