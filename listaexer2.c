/*/Leia um inteiro indicando uma quantidade de horas. Se a quantidade for menor ou igual a 23, 
simplesmente imprima o número de horas. Caso contrário, 
calcule e imprima a quantidade de dias completos e de horas remanescentes./*/

#include <stdio.h>
#include <locale.h>
 int main(){
     setlocale(LC_ALL , "portuguese");
    int qnt_hr ,dias_comp, hrs_reman;
    
     printf("Informe a quantidade de horas\n");
     scanf("%i", &qnt_hr);
     
     if(qnt_hr <=23){
         printf("horas %i",qnt_hr);
     } 
     
    else{
       dias_comp=qnt_hr/24;
        dias_comp=qnt_hr /24;
        printf("%i dia(s) e %i hora(s)", dias_comp,dias_comp);
    }
    
     
     return(0);
 }

