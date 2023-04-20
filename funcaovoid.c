#include<stdio.h>
 void verifica (int x);
 
int main(){
int n;
  printf("Informe um numero inteiro:");
  scanf("%i",&n);
  verifica(n);
  return(0);
}
void verifica(int x){
if (x==0){
    printf("%i é igual a zero",x);
}
else {
    printf("%i não é igual a zero");
}
}
