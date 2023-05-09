#include<stdio.h>
#include<string.h>
 int main(){
char nome[50];

printf("Informe seu nome\n");
scanf("%s",nome);

printf("As quatro primeiras letras do seu nome é: %.4s\n",nome);

return(0);
 }
