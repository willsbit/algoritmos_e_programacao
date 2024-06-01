/*
21) Um palíndromo é uma sequência de caracteres cuja leitura é idêntica se feita da direita para
esquerda ou vice-versa. Por exemplo: “osso” e “ovo” são palíndromos. Em textos mais complexos
os espaços e pontuação são ignorados. Ex: A frase “subi no onibus” é o exemplo de uma frase
palíndroma onde os espaços foram ignorados. Faça um algoritmo que leia uma sequência de
caracteres, mostre-a e diga se é um palíndromo ou não.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i, j, len, char_pos = -1;
    char str[64];
    printf("Digite a frase: ");
    fgets(str, 64, stdin);
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);

    for (i=0, j=(len-1); i<j;) {
        if (str[i] == ' ' && str[j] != ' ') {
            i++;
        } else if (str[i] != ' ' && str[j] == ' ') {
            j--;
        }

        if (str[i] != str[j]) {
            break;
        }

        i++;
        j--;
    }

    if (i >= j) {
        printf("A frase é um palíndromo.\n");
    } else {
        printf("Não é palíndromo.\n");
    }
}
