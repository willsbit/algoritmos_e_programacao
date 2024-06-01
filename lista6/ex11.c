/*
11) Escreva um algoritmo que receba uma frase e um caractere e verifique em que posição da
frase o caractere digitado aparece pela última vez.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i, len, char_pos = -1;
    char str[64], letter;
    printf("Digite a frase: ");
    fgets(str, 64, stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Digite a letra: ");
    scanf("%c", &letter);

    len = strlen(str);

    for (i=0; i<len; i++) {
        if (str[i] == letter) {
            char_pos = i;
        }
    }

    if (char_pos == -1) {
        printf("A letra não foi encontrada na string.\n");
    } else {
        printf("A última ocorrência da letra '%c' se encontra na posição %d.\n", letter, char_pos);
    }

}