/*
26. Construa um algoritmo para calcular a média de valores pares e ímpares, que serão digitados
pelo usuário. Ao final o algoritmo deve mostrar estas duas médias. O algoritmo deve mostrar
também o maior número PAR digitado e o menor número ímpar digitado. Para finalizar o usuário
irá digitar um valor negativo. 
*/

#include <stdio.h>

int main() {
    
    int n, sum_odd = 0, sum_even = 0, count_odd = 0, count_even = 0, min_odd = 0, max_even = 0;

    while(1) {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &n);

        if (n < 0) {
            break;
        }

        if ((n % 2) == 0) {
            sum_even+= n;
            count_even++;
            if (n > max_even) {
                max_even = n;
            }
        } else {
            if (count_even == count_odd && count_even == 0) {
                min_odd = n;
            }

            sum_odd += n;
            count_odd++;
            if (n < min_odd) {
                min_odd = n;
            }
        }
    }

    printf("A média dos valores pares é %f\n", ((float)sum_even / count_even));
    printf("A média dos valores ímpares é %f\n", ((float)sum_odd / count_odd));

    printf("O menor número ímpar é %d\n", min_odd);
    printf("O maior número par é %d\n", max_even);


    return 0;
}