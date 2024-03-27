/*
18. Imagine uma brincadeira entre dois colegas, na qual um pensa um número e o outro deve
fazer chutes até acertar o número imaginado. Como dica, a cada tentativa é dito se o número foi
alto ou baixo. Neste contexto, elabore um algoritmo que leia o número imaginado e os chutes,
mostrando ao final o número de tentativas necessárias para descobrir o número.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
    // numero aleatorio entre 0 e 19
    srand(time(NULL));
    int target = rand() % 20;
    int guess;
    
    while(1) {
        printf("Tente adivinhar o número! -- ");
        scanf("%d", &guess);        
 
        if (target == guess) {
            printf("Parabéns, você acertou!\n");
            break;
        } else if (guess < target) {
            printf("Baixo!\n");
        } else {
            printf("Alto\n");
        }
    }
    return 0;
}