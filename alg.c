/*Uma criança quer brincar no parquinho, mas ela precisa ter idade e tamanho mínimo
para que não se machuque. Só permita se ela tiver a partir de 5 anos e no mínimo
80cm. Exiba uma mensagem se a criança pôde brincar ou não*/


#include <stdio.h>
int main(){
int idade;
float altura;

printf("Informe sua idade");
scanf("%i",&idade);

printf("Informe sua altura:\n");
scanf("%f",&altura);

if (idade>=5 && altura>=80){
    printf("A criança pode brincar no parquinho!");
}
    else {
        printf("A criança não tem idade o suficiente para brincar no parquinho!");
        
    }
    
return(0);
}
