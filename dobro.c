/*/Escreva um programa que leia um número inteiro positivo e exiba o dobro do mesmo./*/

#include<stdio.h>
 int main(){
     int n,dobro;
     printf("Informe um numero inteiro positivo:");
     scanf("%d",&n);
     
     dobro=n*2;
        printf("O dobro do numero é:%i\n",dobro);
        
     return(0);
 }
