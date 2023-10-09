/*/Escreva um programa que solicita e armazena dez números inteiros em um vetor e, 
ao final, informa o maior valor encontrado no vetor/*/


#include<stdio.h>
 int main(){
    int vet[10];
    int maior, i;
    
   printf("Informe 10 numeros inteiros!");
    for(i=0; i<10; i++){
        printf("numeros %d\n",i + 1);
        scanf("%d",&vet[i]);
    } 
      maior=vet[0];
      
          for(i=0; i<10; i++){
            if(vet[i]> maior){
              maior= vet[i];
         }
      }
      printf("O maior valor encontrado no vetor foi de %d\n", maior);
    return 0;
 }
