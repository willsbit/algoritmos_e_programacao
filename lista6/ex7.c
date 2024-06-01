/*
7) Escreva um algoritmo que troque todas as letras maiúsculas por minúsculas e as minúsculas
por maiúsculas de uma string dada pelo usuário.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i;
    char str[64];
    printf("Digite a frase: ");
    gets(str);
 
    for(i=0; i<strlen(str); i++) {
        str[i] = str[i] ^ 32; // bitwise XOR
    }
 
    puts(str);
 
    return 0;
}