/*
10) Faça um algoritmo que receba uma string e uma letra. Em seguida, informe ao usuário em que
posição da string encontra-se a primeira ocorrência desta carácter.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i, len;
    char str[64], letter;
    printf("Digite a frase: ");
    fgets(str, 64, stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Digite a letra: ");
    scanf("%c", &letter);

    len = strlen(str);

    for (i=0; i<len; i++) {
        if (str[i] == letter) {
            printf("A primeira ocorrência da letra '%c' se encontra na posição %d.\n", letter, i);
            break;
        }
    }

    if (i >= len) {
        printf("A letra não foi encontrada na string.\n");
    }

}