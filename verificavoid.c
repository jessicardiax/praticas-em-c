//Crie uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa 
//se ele é positivo, negativo ou neutro

#include<stdio.h>
#include <locale.h>
void verifica (int x);
int main(){
    setlocale(LC_ALL,"portuguese");
    int n;
    printf("Informe um numero:");
    scanf("%i",&n);
    verifica (n);
    return(0);
}
void verifica (int x){
    if (x>0){
        printf("%i é positivo",x);
    }
    else if (x<0){
        printf("%i é negativo",x);
    }
    else{
        printf("%i é neutro");
    }
}
