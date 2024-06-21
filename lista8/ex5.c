/*
5) Criar uma função que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em
ordem crescente.
*/

#include <stdio.h>
 
struct OrderedList {
    int a;
    int b;
    int c;
};
typedef struct OrderedList OrderedList;
 
OrderedList sort(int a, int b, int c) {
    int swap;
    OrderedList list;
 
    if (a > b) {
        swap = a;
        a = b;
        b = swap;
    }
 
    if (a > c) {
        swap = a;
        a = c;
        c = swap;
    }
 
    if (b > c) {
        swap = b;
        b = c;
        c = swap;
    }
    
    list.a = a;
    list.b = b;
    list.c = c;
 
    return list;
}
 
int main () {
    int a = 54, b = 86, c = 12;
    OrderedList list;
 
    list = sort(a, b, c);
    printf("%d < %d < %d\n", list.a, list.b, list.c);
 
 
    return 0;
}