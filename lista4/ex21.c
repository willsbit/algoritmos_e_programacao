/*
21) Faça um algoritmo para ler e armazenar em um vetor a temperatura média em todos os dias
do ano. Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura média anual
d) O número de dias no ano em que a temperatura foi inferior a média anual
*/

#include <stdio.h>
#define VEC_SIZE 5 // 365

int main() {
    int i, counter=0;
    float x, vec[VEC_SIZE], min_temp, max_temp, sum, avg;

    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite a temperatura média do %dº dia do ano: ", i+1);
        scanf("%f", &vec[i]);

        if (i == 0) {min_temp = vec[i]; max_temp = vec[i];}

        if (vec[i] < min_temp) {
            min_temp = vec[i];
        } else if (vec[i] > max_temp) {
            max_temp = vec[i];
        }

        sum += vec[i];
    }

    avg = sum / (float)i;

    for(i=0; i<VEC_SIZE;i++) {
        if (vec[i] < avg) {
            counter++;
        }
    }

    printf("A menor temperatura do ano foi %.2f°C.\n", min_temp);
    printf("A maior temperatura do ano foi %.2f°C.\n", max_temp);
    printf("A temperatura média do ano foi %.2f°C.\n", avg);
    printf("%d dias tiveram a temperatura menor do que a média anual.\n", counter);





    return 0;
}
