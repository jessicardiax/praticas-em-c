#include <stdio.h>
#include <string.h>

int main() {
    char carros[5][50];
    float consumo_gasolina[5];

    strcpy(carros[0], "COROLLA");
    strcpy(carros[1], "CIVIC");
    strcpy(carros[2], "ARGO");
    strcpy(carros[3], "CRUZE");
    strcpy(carros[4], "JETTA");

    consumo_gasolina[0] = 10.6;
    consumo_gasolina[1] = 26.9;
    consumo_gasolina[2] = 13.6;
    consumo_gasolina[3] = 9.6;
    consumo_gasolina[4] = 13.8;

    float menorConsumo = consumo_gasolina[0];
    int carro_economico = 0;

    // Encontre o modelo do carro mais econômico
    for (int i = 1; i < 5; i++) {
        if (consumo_gasolina[i] < menorConsumo) {
            menorConsumo = consumo_gasolina[i];
            carro_economico = i;
        }
    }

    printf("O modelo do carro mais econômico é: %s\n", carros[carro_economico]);

    printf("Consumo de combustível para percorrer 1000 km:\n");

    for (int i = 0; i < 5; i++) {
        float litros_consumidos = 1000 / consumo_gasolina[i];
        float custo = litros_consumidos * 2.25; // Custo em R$ com gasolina a R$ 2,25 o litro
        printf("%s: %.2f litros, %.2f reais\n", carros[i], litros_consumidos, custo);
    }

    return 0;
}
