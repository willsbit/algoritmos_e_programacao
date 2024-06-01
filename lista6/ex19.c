/*
19) Faça um programa que leia uma cadeia de caracteres e a inverta.
Obs.: Lembre que uma cadeia de caracteres é finalizada com o '\0'.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i, len;
    char str[64], inverted[64];
 
    printf("Digite a string: ");
    gets(str);
 
    len = strlen(str);
    for(i = 0; i<len; i++) {
        inverted[len-1-i] = str[i];
    }
    inverted[len] = '\0';
 
    puts(inverted);
 
    return 0;
}