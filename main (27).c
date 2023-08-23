/*/Escreva um programa em linguagem C que verifique a validade de uma senha fornecida pelo usuario.
A senha valida é o numero 1234. Devem ser impresas as seguintes mensagens:
 ACESSO PERMITIDO caso a senha seja válida
 ACESSO NEGADO caso seja inválida/*/

#include <stdio.h>
#include <locale.h>
 int main(){
     int senha;
      printf("Olá usuario, para ter acesso a plataforma informe sua senha:");
      scanf("%i",&senha);
      
      if(senha==1234){
         printf("ACESSO PERMITIDO!");
      }
      else {
          printf("ACESSO NEGADO!");
      }
        return(0);
 }