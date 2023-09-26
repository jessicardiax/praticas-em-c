/*/Crie um procedimento,função sem retorno, que recebe um valor inteiro como parâmetro 
e informa se ele é positivo, negativo ou neutro./*/

#include <stdio.h>
void no_retun(int x){
    
    if (x>0){
        printf("O numero digitado é positivo!\n");
    }
    else if (x<0){
        printf("O numero digitado é negativo!\n");
    }
    else {
        printf("O numero digitado é neutro\n!");
    }
    
}

    int main(){
    int y;
        
    printf("Informe um numero!\n");
    scanf("%i", &y);
    
    no_retun(y);
    
    return 0;
    }
