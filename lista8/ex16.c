/*
16) Desenvolva uma função que leia uma matriz de caracteres e verifique se dentre os caracteres
da matriz lida estão todas as vogais.
*/

#include <stdio.h>
#include <ctype.h>
#define COLS 2
#define ROWS 3
 
int check_vowels(char mat[ROWS][COLS]) {
    int i, j, contains_a = 0, contains_e = 0, contains_i = 0, contains_o = 0, contains_u = 0;
    char curr_char;
 
    for (i=0; i < ROWS; i++) {
        for (j=0; j < COLS; j++) {
            curr_char = tolower(mat[i][j]);
 
            if (curr_char == 'a') {
                contains_a = 1;
            } else if (curr_char == 'e') {
                contains_e = 1;
            } else if (curr_char == 'i') {
                contains_i = 1;
            } else if (curr_char == 'o') {
                contains_o = 1;
            } else if (curr_char == 'u') {
                contains_u = 1;
            }
 
        }
    }
 
    if (contains_a && contains_e && contains_i && contains_o && contains_u) {
        return 1;
    }
 
    return 0;
 
 
}
 
int main () {
    int i, j, contains_vowels;
    char mat[ROWS][COLS];
 
    for (i=0; i < ROWS; i++) {
        for (j=0; j < COLS; j++) {
            printf("Digite o elemento [%d][%d] da matriz:", i, j);
            scanf(" %c", &mat[i][j]);
        }
    }
 
    contains_vowels = check_vowels(mat);
 
    if (contains_vowels) {
        printf("A matriz contém todas as vogais.\n");
    } else {
        printf("A matriz não contém todas as vogais.\n");
    }
 
    return 0;
}