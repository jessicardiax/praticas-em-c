#include <stdio.h>
int main(){
    float p,a,imc;
    printf("Informe seu peso:");
    scanf("%f",&p);
    printf("Informe sua altura:");
     scanf("%f",&a);
     imc=p/a;
     printf("O seu imc é :%.2f\n\n",imc);
     return (0);
     
}