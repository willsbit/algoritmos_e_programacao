/*
9) Escreva uma função que receba uma cadeia de caracteres e imprima uma tabela que dê o
número de ocorrências de cada carácter na cadeia.
*/

#include <stdio.h>
#include <string.h>
 #define ASCII_CODES 256

int main() {
    int i, len, current_char, char_counts[ASCII_CODES] = {0}; // equivalente a memset, inicializa todos os registros da array para 0 
    char str[64];

    printf("Digite a frase: ");
    fgets(str, 64, stdin);
    str[strcspn(str, "\n")] = 0;


    len = strlen(str);

    for (i=0; i<len; i++) {
        current_char = str[i];
        char_counts[current_char]++;
    }
    printf("char|\tcount|\t\n");

    for (i=0; i<ASCII_CODES; i++) {
        if (char_counts[i] > 0) {
            printf("%c   |   %d    |\n", i, char_counts[i]);
        }
    }
}

