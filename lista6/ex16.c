/*
16) Leia duas strings. Se as strings forem iguais escreva “strings iguais”. Caso contrário,
concatene as duas strings e imprima a string resultante.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    char str1[64], str2[64];
    printf("Digite a primeira string: ");
    gets(str1);
 
    printf("Digite a segunda string: ");
    gets(str2);
 
    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("%s%s\n", str1, str2);
    }    
 
    return 0;
}