/*/Faça um programa que exibe, em ordem decrescente, os 500 primeiros números 
inteiros positivos/*/

#include<stdio.h>
int main(){
    int i;
      printf("A ordem decrescente é:\n");
    for(i = 500 ; i >= 1 ; i--){
        
        printf("%i " ,i);
    }
    return(0);
}
