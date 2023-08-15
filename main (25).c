//Escreva e implemente um algoritmo para converter um peso expresso em libras para 
//quilogramas (1Kg = 1Lb * 2.2). Uma vez que o peso não pode ser negativo, o nosso 
//programa não deve aceitar um número negativo como peso

#include <stdio.h>
int main(){
float kg,lb, peso;
 
 printf("Informe o peso em libras\n");
 scanf("%f",&lb);
 
 kg=lb*2.2;
 
 printf("O peso em quilograma é %f",kg);
 
 return(0);
}