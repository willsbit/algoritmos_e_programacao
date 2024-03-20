#include <stdio.h>
int main() {
    int cod_estado; // de 1 a 5 
    int cod_carga; // de 10 a 40
    int preco_kg_carga;
    float peso_carga_ton, peso_carga_kg, preco_carga, pct_imposto, valor_imposto;

    printf("Digite o código do estado: ");
    scanf("%i", &cod_estado);

    printf("Digite o peso da carga (em ton): ");
    scanf("%f", &peso_carga_ton);

    printf("Digite o código da carga: ");
    scanf("%i", &cod_carga);

    peso_carga_kg = peso_carga_ton * 1000;
    printf("O peso da carga é %.2fkg\n", peso_carga_kg);
    if (cod_carga >= 10 && cod_carga <= 20) {
        preco_kg_carga = 100;
    } else if (cod_carga >= 21 && cod_carga <= 30) {
        preco_kg_carga = 250;
    } else {
        preco_kg_carga = 340;
    }

    preco_carga = peso_carga_kg * preco_kg_carga;
    printf("O preço da carga é %.2f\n", preco_carga);

    pct_imposto = 0;
    switch (cod_estado) {
        case 1:
            pct_imposto = 0.35;
            break;
        case 2:
            pct_imposto = 0.25;
            break;
        case 3:
            pct_imposto = 0.15;
            break;
        case 4:
            pct_imposto = 0.05;
            break;
    }

    valor_imposto = preco_carga * pct_imposto;
    printf("O valor do imposto é R$%.2f\n", valor_imposto);
    printf("O valor total transportado é R$%.2f\n", preco_carga + valor_imposto);
    return 0;
}