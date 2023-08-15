//Desenvolva um algoritmo que receba uma hora formada por hora e minutos, e 
//calcule a hora digitada apenas em minutos

#include <stdio.h>
int main(){
int hr, min;

printf("Informe a hora\n");
scanf("%i",&hr);

min=hr*60;
printf("Hora em minuto %d",min);

return(0);
}