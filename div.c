//Desenvolver um algoritmo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.

#include <stdio.h>

int main() {
  int n;
  
  printf("Informe um numero:");
  scanf("%d",&n);
   
    if (((n % 5)==0) && ((n % 3)==0)){
        printf("O numero é divisivel por ambos valores:");
    }
    else{
        printf("O numero não é divisivel");
    }
    
    return 0;
}
