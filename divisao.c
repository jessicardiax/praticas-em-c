/*/A determinação da divisibilidade de um número por outro é importante na
programação. Sabendo disso, crie um programa que solicita e lê dois números
inteiros (numerador e denominador) e verifica se a divisão é exata. Se for, exiba a
mensagem: “É divisível!”. Caso contrário, exiba a mensagem: “Não é divisível!”/*/

    #include <stdio.h>
    int main(){
      int n,d,r;
        printf("digite um numero:");
        scanf("%i",&n);
        
        printf ("digite outro numero:");
        scanf("%i",&d);
         
        r=n%d;
        if (r==0){
            printf("É divisível!");
        }
        
        else
        if (r!=0){
            printf("Não é divisivel!");
              }
                  return(0);
    }
