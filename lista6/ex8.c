/*
8) Faça um algoritmo que receba uma frase e mostre quantas letras diferentes ela contém.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i, j, distinct_letters = 0, len;
    char str[64], distinct_chars[64], current_char;
    printf("Digite a frase: ");
    fgets(str, 64, stdin);
    str[strcspn(str, "\n")] = 0;


    len = strlen(str);

    if (len > 0) {
        distinct_letters++;
        current_char = str[0];
        distinct_chars[0] = str[0];
    }

    for (i=1; i<len; i++) {
        if ((((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a')  && (str[i] <= 'z'))) && (str[i] != current_char)) {
            for (j=0; j<len; j++) {
                if (distinct_chars[j] == str[i]) {
                    break;
                }
            }
            if (j >= len) {
                distinct_chars[distinct_letters] = str[i];
                distinct_letters++;
            }
        }
        current_char = str[i];
    }

    printf("Existem %d caracteres distintos na string.\n", distinct_letters);
}