/*/Crie um programa para ler 3 notas e mostrar a média delas./*/

#include <stdio.h>
  int main(){
      float n1,n2,n3,m;
      
      printf("Informe sua primeira nota:");
      scanf("%f",&n1);
      
      printf("Informe sua segunda nota:");
      scanf("%f",&n2);
      
      printf("Informe sua terceira nota:");
      scanf("%f",&n3);
      
      m=n1+n2+n3/3;
      
      if (m>7){
          printf("Você foi aprovado!");
      }
      if (m==3.5){
      printf("Voce fará a quarta prova !");
  }
      else {
          printf("Voce foi reprovado:");
          
      }
      
          return (0);
  }
