#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool n_primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int i, f;

    while (true) {
        printf("Valor Inicial (VI): ");
        scanf("%d", &i);
        printf("Valor final: (VF) ");
        scanf("%d", &f);

        if (i > f) {
            printf("Intervalo invalido.\n");
            break;
        }

        printf("Os numero primos primos nesses intervalos sao:\n");
        for (int i = i; i <= f; i++) {
            if (n_primo(i)) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}