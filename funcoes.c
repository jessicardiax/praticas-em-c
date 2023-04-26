#include<stdio.h>
#include<locale.h>
 float vol (float alt,float comp,float larg);
 int main(){
     setlocale(LC_ALL, "portuguese");
     float a,v,c,l;
     
     printf("Informe os valores da caixa\n");
     scanf("%f %f %f",&a,&c,&l);
     
     v = vol(a,c,l);
     printf("Os valores da caixa são %.1f",v);
     return(0);
 }
 float vol (float alt,float comp,float larg){
    return (comp*alt*larg);
 }
