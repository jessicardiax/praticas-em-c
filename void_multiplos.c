#include <stdio.h>
#include<locale.h>
 void verifica (int n);
 
 int main(){
     setlocale(LC_ALL,"portuguese");
      int n1;
       printf("Informe um numero\n");
       scanf("%i",&n1);
       verifica (n1);
       return(0);
 }     
       
       void verifica (int n){
           if (n % 5==0){
               printf("%i é multiplo de 5",n);
           }
           else {
               printf("%i não é multiplo de 5",n);
           }
       }
 
