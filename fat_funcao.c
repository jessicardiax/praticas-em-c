

#include<stdio.h>
int cal_fatoral(int y){
    int fatorial=1;
    
   if(y<0){
       printf("Não é possivel calcular o fatorial de um numero negativo!");
       return -1;
   }
   for(int i=1; i<=y; i++){
       fatorial *= i;
   }
   return fatorial;
}

int main(){
    int x, fat;
    printf("Informe um numero inteiro!");
    scanf("%d",&x);

fat = cal_fatoral(x);

if(fat != -1){
 printf("resultado do fatorial de %d é %d", x,fat);   
}

return 0;
}
