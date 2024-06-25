/*
Criar um programa que declare uma variável chamada num do tipo int com o valor 
10. Crie um ponteiro que aponte para a variável num. Crie uma função que recebe o 
endereço da variável num e altere o valor para 15 através do uso de ponteiros. Na 
função principal mostre o valor da variável num. */

#include <stdio.h>
 
void set_to_15(int *x) {
    *x = 15;
}
 
int main () {
    int num = 10;
    set_to_15(&num);
 
    printf("%d\n", num);
 
    return 0;
}
