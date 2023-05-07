#include<stdio.h>
#include<locale.h>
  int main(){
 int i;
 setlocale(LC_ALL,"Portuguese");
 
 printf("numeros de 1 ate 50");
 for(i=0; i<=50; i++){
     printf("%d\n",i);
 }
     return (0);
 }
