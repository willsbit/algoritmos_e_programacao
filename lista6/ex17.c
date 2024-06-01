/*
17) Considere uma string composta por várias subsequencias, por exemplo,
cccaaaabbbbxdddddddddaaannn. A menor subsequencia é a da letra x, com apenas um
elemento; a maior subsequencia é a da letra d, com 9 elementos. Faça um algoritmo para ler uma
string e mostrar qual é a letra que ocorre na maior subsequencia e o tamanho desta.
Ex.: Entrada: aaabbbbaa; Saída: maior b, tamanho 4.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int i, j, len, current_char, current_subseq = 1, max_subseq = 1;
    char str[64], subsequences[64], max_char;
    int subseq_size[64];
    printf("Digite a string: ");
    gets(str);
 
    len = strlen(str);
    current_char = str[0];
    max_char = str[0];
    for (i=1; i<len; i++) {
        if(str[i] == current_char) {
            current_subseq++; 
            if (current_subseq > max_subseq) {
                max_subseq = current_subseq;
                max_char = str[i];
            }
        } else {
            current_subseq = 1;
        }
 
        current_char = str[i];
    }
 
    printf("A maior subsequência é da letra %c, com %d ocorrências.\n", max_char, max_subseq);
    return 0;
}