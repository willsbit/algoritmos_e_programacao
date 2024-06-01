/*
20) Escrever um algoritmo que recebe uma cadeia de carácteres S, a posição inicial P da
subcadeia a ser retirada e N o comprimento desta subcadeia e devolve S sem a subcadeia
especificada.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i, j, len, p, n;
    char str[64], tmp[64];
 
    printf("Digite a string: ");
    gets(str);
    len = strlen(str);
 
    printf("Digite a posição inicial (<=%d):", len-1);
    scanf("%d", &p);
 
 
    printf("Digite o tamanho da subsequência (precisa ser <=%d):", (len-p));
    scanf("%d", &n);
 
    // r e m o v e r
    // 0 1 2 3 4 5 6
    //     p     n
 
    for(i=0; i<len; i++) {
        if ((i >= p) && (i < (p+n))) {
            str[i] = str[n+i]; // delsocar os caracteres n dígitos para a esquerda
        }
    }
 
    str[len - (n-p)] = '\0';
    puts(str);
 
    return 0;
}
 