/*
14) Implemente um algoritmo que receba uma string como parâmetro e substitua todas as letras
por suas sucessoras no alfabeto. Por exemplo, a string “Casa” seria alterada para “Dbtb”.
A letra z deve ser substituída pela letra a (e Z por A). Caracteres que não forem letras devem
permanecer alterados.
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
        if ((str[i] >= 'A' && str[i] < 'Z') || (str[i] >= 'a' && str[i] <'z')) {
            str[i] += 1;
        } else if (str[i] == 'z' || str[i] == 'Z') {
            str[i] -= 25;
        }
    }
 
    puts(str);
 
    return 0;
}