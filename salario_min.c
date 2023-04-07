

#include <stdio.h>

int main(){
  float salm,sal,salarios;
  
 
  printf ("Informe o valor do salario minimo hoje:");
   scanf("%f",&salm);
  
  printf("Informe seu salario:");
   scanf("%f",&sal);
    
   salarios=sal/salm;
    
    
printf("Uma pessoa que recebe um salario de R$ %.3f reais recebe %.3f salarios minimos \n", sal,salarios);  

    return (0);
}
