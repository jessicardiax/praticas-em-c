#include <stdio.h>

int main(){
    int idade;
    
    for (int i=0; i<=10; i++){
        
        printf("Informe sua idade:\n");
        scanf("%i",&idade);
        
        if (idade >=18){
            printf("Voce é maior de idade:\n");
        }
        else {
            printf("Voce é menor de idade:\n");
        }
    }

return (0);
}
