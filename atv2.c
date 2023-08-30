/*/Escreva um programa que solicita e lê a idade do usuário, e exibe uma mensagem 
informando se é maior ou menor de idade. Esses procedimentos devem ser repetidos 
10 vezes./*/

#include <stdio.h>
#include <locale.h>
 int main(){
     setlocale(LC_ALL, "portuguese");
     int i;
     
     for(i=0; i<=10; i++){
         int i;
         printf("Digite sua idade");
         scanf("%i", &i);
     
         if (i<18){
             printf("Menor de idade:%i\n",i);
         }
         else {
             printf("Maior de idade:%i\n",i);
     } 
     }
      return(0);
 }