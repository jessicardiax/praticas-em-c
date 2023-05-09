/*/ Ler nome, endereço, telefone e imprimir /*/

#include<stdio.h>
 int main(){
 char nome[50], endereco[100], telefone[20];
   
   printf("Informe seu nome:");
   scanf("%s",&nome);
   
   printf("Informe seu endereço:");
   scanf("%s",&endereco);
   
   printf("Informe seu telefone ");
   scanf("%s",&telefone);
   
   
   printf("\nnome: %s\n",nome);
   printf("\nEndereco: %s\n",endereco);
   printf("\ntelefone: %s\n",telefone);
 return (0);
 }
