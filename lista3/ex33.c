/*
33. A série de Ricci difere da série de Fibonacci porque os dois primeiros termos são fornecidos
pelo usuário. Os demais termos são gerados da mesma forma que na série de Fibonacci, isto é,
os demais termos são sempre a soma dos dois termos anteriores. Implemente um algoritmo que
imprima um total de 10 termos da série de Ricci, sendo lidos os dois primeiros termos.
*/

#include <stdio.h>
 
int main() {
    int i, n_0, n_1, ricci, ricci_n_minus_1 = 0, ricci_n_minus_2 = 0;
 
    printf("Digite o primeiro termo da série de Ricci: ");
    scanf("%d", &n_0);
 
    printf("Digite o segundo termo da série de Ricci: ");
    scanf("%d", &n_1);
 
    printf("|Termo\t|R_n\t|\n");
 
    for(i=0; i<10; i++) {
        if (i == 0) {
            ricci = n_0;
        } else if (i == 1) {
            ricci_n_minus_1 = ricci;
            ricci = n_1;
        } else {
            ricci_n_minus_2 = ricci_n_minus_1;
            ricci_n_minus_1 = ricci;
 
            ricci = ricci_n_minus_1 + ricci_n_minus_2;
        } 
        
        printf("|%d\t|%d\t|\n", i, ricci);
    }
 
    return 0;
}
