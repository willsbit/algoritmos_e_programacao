/*
2) Implemente um algoritmo que receba um frase, calcule e mostre a quantidade de vogais da
frase digitada. O algoritmo deverá contar vogais maiúsculas e minúsculas.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i, contador_vogais = 0;
    char str[64];
    printf("Digite a frase: ");
    gets(str);
 
    for(i=0; i<strlen(str); i++) {
        if (
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'
            ) {
                contador_vogais++;
            }
    }
 
    printf("A frase tem %d vogais.\n", contador_vogais);
 
    return 0;
}