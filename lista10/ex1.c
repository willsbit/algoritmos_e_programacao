/*
Suponha que os endereços das variáveis a, b e c são  1000, 1004 e 1008,respectivamente.
(a) pa         (b) *pa        (c) pb         (d) c
*/

#include <stdio.h>
 
int main () {
    float a, b, c, *pa, *pb;
    a = 0.001;
    b = 0.003;
    pa = &a;
    *pa = 2*a;
    pb = &b;
    c = 3 * (*pa + *pb);
 
    printf("a: %.3f, b: %.3f, c: %.3f\n", a, b, c);
    printf("&a: %p, &b: %p, c: %p\n", pa, pb, &c);
 
    return 0;
}