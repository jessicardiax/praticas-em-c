
#include<stdio.h>
    int main(){
    int vet[5]; //armazena 5 valores inteiros!
    int sum;
    int x;
    
    printf("Informe 5 numeros inteiros!");
    for(x=0; x<5; x++){
        printf("Numeros %i\n", x + 1);
        scanf("%i", &vet[x]);
    }
    for(x=0; x<5; x++){
        sum += vet[x]; 
    }
    printf("resultado da soma %d\n", sum);
    
    return 0;
    }
