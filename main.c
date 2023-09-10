//Em um frigorífico existem 15 bois.Cada boi traz preso em seu pescoço 
//seu peso (real). Faça um algoritmo que escreva o número e o peso do boi mais gordo e do boi mais magro.


#include<stdio.h>
int main(){
    int i;
    float boi_gordo, boi_magro, peso;
    
    i=15;
     boi_gordo=0;
     boi_magro=0; 
      
       for (i=1; i<=15; i++){
         printf("Informe o peso do boi\n");
         scanf("%f", &peso);
         
         boi_magro=peso;
         if (peso>=200 && peso<= 450){
         printf("Boi magro, pois o peso do boi esta na media do boi magro, %f\n",boi_magro);
         }
         
            boi_gordo=peso;
            if(peso>=500){
                printf("Boi gordo, pois o peso do boi esta na media do boi gordo, %f\n",boi_gordo);
            }
         
     }
     return(0);
}
