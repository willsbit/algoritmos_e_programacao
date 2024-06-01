/*
4) Faça um algoritmo para ler uma string e retorne o número de palavras da mesma;
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i, contador_palavras = 1;
    char str[64];
    printf("Digite a frase: ");
    gets(str);
 
    for(i=0; i<strlen(str); i++) {
        if (str[i] == ' ') {
            contador_palavras++;
        }
    }
 
 
    if (strlen(str) == 0) {
        contador_palavras = 0;
    }
 
    printf("A frase tem %d palavras.\n", contador_palavras);
 
    return 0;
}