#include <stdio.h>


   int main(){
 
       float d,r;
    printf("informe um valor em real: \n");
    scanf("%f",&r);
    printf("informe o valor do dolar atual \n");
    scanf("%f",&d);
 d=r/5.22;
   printf("O valor em dolar é:%.2f\n\n",d);
   return(0);
   }