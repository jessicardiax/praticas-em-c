/*/Dado três valores, A, B, e C, construa um programa para verificar se estes valores 
podem ser valores dos lados de um triângulo. Em caso positivo, verificar se o 
triângulo é escaleno, equilátero ou isósceles./*/

#include<stdio.h>
int main(){
float A,B,C;
printf("Informe o valor A:");
scanf("%f",&A);
printf("Informe o valor B:");
scanf("%f",&B);
printf("Informe o valor C:");
scanf("%f",&C);

if ((A+B<C)||(B+C<A)||(A+C<B)) {
    printf("Não é triangulo, a soma de dois lados é menor:");
}
return(1);

if (A==B && B==C){
    printf("Triangulo equilátero!");
}
if (A==B && A!=C && B!=C){
    printf("Triangulo isoceles");
}
 if(A!=B && B!=C && C!=A){
     printf("Triangulo escaleno");
 }   
return(0);
}
