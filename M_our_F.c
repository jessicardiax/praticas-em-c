/*/Faça um Programa que verifique se uma letra digitada é "F" ou "M". 
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido./*/

#include <stdio.h>
int main(){

    char sexo;
     printf("Informe seu sexo:");
     scanf("%c",&sexo);
     
     
       if (sexo=='F'||sexo=='f'){
           printf("Feminino\n");
       }
        else if (sexo== 'M'|| sexo == 'm'){
           printf("Masculino\n");
       }
       else {
           printf("Opção Invalida:");
       }
     return(0);
}
