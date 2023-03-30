/*/Crie um programa que leia um valor de hora e informe quantos minutos se passaram desde o início do dia.
/*/

#include <stdio.h>
  int main(){
      float hr,min;
      
      printf("Informe o horario atual (24 horas)");
      scanf("%f",&hr);
       
    
       min=hr*6;
       
       printf("Desde o inicio do dia ja se passaram %f minutos" ,min);
       
       return (0);
  }
