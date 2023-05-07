#include<stdio.h>
#include<locale.h>
  int main(){
 int i, soma = 0;
 setlocale(LC_ALL,"Portuguese");
  printf("Numeros impares de 1 até 500");
for (i=0; i<=500; i++){
   if (i % 2 != 0 && i % 3 == 0) {
       soma +=i;
   }
}          
printf("A soma dos numeros impares multiplos de tres no intervalo de 1 a 500 é: %d\n", soma);
 
 return(0);
  }
