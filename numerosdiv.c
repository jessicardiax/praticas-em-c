
#include <stdio.h>

int main(){
    int cont=0, num;
    
    for (int num=10; num<51; num++){
        if (num % 2 == 0){
            printf("%i\n" ,num);
            cont++;
        }
    }
    
        printf("numeros divisiveis existentes %i\n",cont);
  
  
    return(0);
}
