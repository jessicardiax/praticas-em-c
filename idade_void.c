/*/Faça uma função, sem retorno, que recebe a idade do usuário por parâmetro, verifica
e informa se ele é maior de idade ou não.
/*/

#include<stdio.h>
#include<locale.h>
void verifica (int x);
 
 int main(){
     setlocale (LC_ALL, "Portuguese");
     int i;
     printf("Informe sua idade:");
     scanf("%i",&i);
     verifica(i);
     return(0);
 }
void verifica (int x){
     if (x>=18){
         printf("%i é maior de idade!",x);
     }
     else {
         printf("%i é menor de idade !",x);
     }
}

