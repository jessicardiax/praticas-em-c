/*/Leia um valor inteiro e indique se o mesmo se encontra ou não dentro do intervalo fechado de [30, 100]./*/
#include <stdio.h>
#include <locale.h>
 int main(){
  setlocale(LC_ALL, "Portuguese:");
    
    int n;
    
    printf("Informe um numero inteiro\n");
    scanf("%i",&n);
    
    if(n>=30 && n<=101){
        printf("O numero se encontra dentro do intervalo \n%i",n);
    }
       else{
           printf("O numero informado não se encontra dentro do intervalo");
       } 
       
    
     
    
  return (0);   
 }