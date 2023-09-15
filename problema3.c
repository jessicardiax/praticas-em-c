#include <stdio.h>

int main() {
    int n;

    printf("Indique o número de participantes da competição: ");
    scanf("%d", &n);

    int vencedor = 0;
    double melhor_Media = 0;
    double melhor_Nota_Ganhador, piorNotaperderdor;

    for (int i = 1; i <= n; i++) {
        printf("Notas do participante %d\n", i);

        double notas[5];
        double Notas_soma = 0;

        for (int j = 0; j < 5; j++) {
            printf("Jurado %d: ", j + 1);
            scanf("%lf", &notas[j]);

             Notas_soma += notas[j];
        }

        double melhor_Nota = notas[0];
        double piorNota = notas[0];
        for (int j = 1; j < 5; j++) {
            if (notas[j] > melhor_Nota ) {
                melhor_Nota  = notas[j];
            }
            if (notas[j] < piorNota) {
                piorNota = notas[j];
            }
        }
        Notas_soma=(Notas_soma - melhor_Nota  - piorNota);
        double media =  Notas_soma / 3;

        if (media > melhor_Media) {
            melhor_Media = media;
            vencedor = i;
            melhor_Nota_Ganhador = melhor_Nota;
            piorNotaperderdor = piorNota;
        }
    }

    printf("O ganhador da competição é o participante %d\n", vencedor);
    printf("Melhor nota do ganhador: %.2lf\n",  melhor_Nota_Ganhador);
    printf("Pior nota do ganhador: %.2lf\n", piorNotaperderdor);
    printf("Média do ganhador: %.2lf\n", melhor_Media);

    return 0;
}