/*
18) Faça um algoritmo que receba uma frase e faça a criptografia, retirando das palavras suas
vogais. O algoritmo deverá armazenar estas vogais e suas posições originais em vetores, mostrar
a frase criptografada e posteriormente descriptografá-la.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i, j, k = 0, l, len, vowels_idx[64];
    char str[64], vowels[64], lower, tmp[64];
    printf("Digite a string: ");
    gets(str);
 
    len = strlen(str);
    // criar vetores auxiliares e remover vogais de str
    for(i=0, l=0; i<len; i++, l++) {
        if (i+1 < len) {
            lower = tolower(str[i]);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels[k] = str[i];
                vowels_idx[k] = l; // variável "l" utilizada para driblar os decrementos de i que são necessários
                k++;               // e ter a posição original das vogais salvas em um vetor
                for (j=i; j<len; j++) {
                    str[j] = str[j+1];
                }
                i--;
            }
        }
    }
 
    printf("Frase criptografada: %s\n", str);
 
    // reconstruir a string
    for(i=0; i<k; i++) {
        for(j=0; j<vowels_idx[i]; j++) {
            tmp[j] = str[j];
        }
        tmp[vowels_idx[i]] = vowels[i];
 
        for(j=vowels_idx[i]+1; j<len; j++) {
            tmp[j] = str[j-1];
        }
 
        strcpy(str, tmp);
        strcpy(tmp, ""); // limpar o o registro de tmp, copiando a constante "" (string vazia)
    }
 
    printf("Frase descriptografada: \n");
    str[len] = '\0';
    puts(str);
 
    return 0;
}