#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    int comprimento = strlen(nome);

    for (int i = 0; i < comprimento; i++) {
        for (int k = 0; k < i; k++) {
            printf(" ");
        }
        for (int k = i; k < comprimento; k++) {
            printf("%c ", nome[k]);
        }
        printf("\n");
    }

    return 0;
}