

#include<stdio.h>
 int somatorio(int n){
    int i;
    int cont=0;
    
    for(i=0;i<=n; i++){
        cont+=i;
    }
    return cont;
 }
 int main(){
     int n, cont;
     
     printf("informe um numero inteiro positivo!\n");
     scanf("%i", &n);
     
     if (n<0){
         printf("Informe um numero inteiro positivo\n");
         return 1;
     }
     cont=somatorio(n);
     
        printf("O somatorio dos %d primeiros numeros anteriores ate zero é %d\n", n, cont);
    
    return 0;
 }
 
 
 
