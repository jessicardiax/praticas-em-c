/*/faça um programa em c que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) A idade atual dessa pessoa:
b)A quantos anos ela terá em 2038/*/
#include <stdio.h>
int main(){
    int idade, ano_nasc, ano_fut, ano_atual,idade_fut;
     printf("Informe seu ano de nascimento:");
     scanf("%d",&ano_nasc);
    
    ano_atual=2023;
     idade=ano_atual-ano_nasc;
        printf("Sua idade atual é %d\n",idade);
 
        ano_fut=2038;
      idade_fut=ano_fut-ano_nasc;
        printf("Sua idade em 2038 é %d",idade_fut);
 
 return(0);  
}