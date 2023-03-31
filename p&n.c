/*/Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo./*/

#include <stdio.h>
int main(){
    int n;
    
    printf("Informe um numero:");
    scanf("%d",&n);
    
  if (n>=0){
      printf("O numero é positivo");
  }
  
  else{
      printf("O numero é negativo");
  }
  
 return(0);     
}
