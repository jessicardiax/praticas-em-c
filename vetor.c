//Escreva um programa que solicita e armazena oito valores inteiros em um vetor, 
//denominado de A, e exibe os valores armazenados, porém na ordem inversa.

#include <stdio.h>
#include <locale.h>

 int main(){
      setlocale(LC_ALL,"Portuguese");
      int i, vet[8];
      for(i=0; i<8; i++){
       printf("Informe o %iº numero:", i + 1);
       scanf("%i",&vet[i]);
      }
      printf("\n VETOR A \n");
       for(i<8; i>=0; i--){
           printf("%i",vet[i]);
       }
           return (0);
 
 }
 
