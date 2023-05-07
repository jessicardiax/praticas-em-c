#include <stdio.h>
#define n 5

int main() {
    float A[n], B[n];
    int i;

    // solicita e armazena cinco números reais em um vetor A
    for (i = 0; i < n; i++) {
        printf("Digite um numero real: ");
        scanf("%f", &A[i]);
    }

    // preenche outro vetor B de acordo com as condições descritas
    for (i = 0; i < n; i++) {
        if (i == 0) {
            B[i] = A[i]; 
        } else if (i % 2 == 0) {
            B[i] = A[i] * 5; 
        } else {
            B[i] = A[i] + 5; 
        } 
    }
  
    // exibe o conteúdo dos vetores A e B
    printf("VETOR A:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", A[i]);
    }
    printf("\n");
  
    printf("VETOR B:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", B[i]);
    }
    printf("\n");
  
    return 0;
}
