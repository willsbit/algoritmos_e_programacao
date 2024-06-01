/*
13) Escreva um algoritmo que receba uma cadeia de caracteres e substitua cada subcadeia de
dois ou mais espaços em branco por um só carácter ' '.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i, j, len;
    char str[64];
    printf("Digite a frase: ");
    gets(str);
 
    len = strlen(str);
    for (i=0; i<len; i++) {
            if (i+1 < len) {
                if (str[i] == ' ' && str[i+1] == ' ') {
                    for(j=i; j<len; j++) {
                        str[j] = str[j+1];
                    }
                    i--;
                }
            }
    }
    puts(str);
 
    return 0;
}