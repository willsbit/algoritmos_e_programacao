/*
3) Escreva um algoritmo que receba uma frase e a retorne escrita de trás pra frente.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i;
    char str[64];
    printf("Digite a frase: ");
    gets(str);
 
    for(i=strlen(str)-1; i>=0; i--) {
        printf("%c", str[i]);
    }
 
    return 0;
}