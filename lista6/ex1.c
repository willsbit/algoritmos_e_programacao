/*
1) Faça um algoritmo para ler a frase “Disciplina de Algoritmos!”
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    char str[64];
    printf("Digite a frase: ");
    gets(str);
    puts(str);
 
    return 0;
}