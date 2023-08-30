
#include <stdio.h>
int main(){
    double x;
    
    printf("\nInforme um numero aleatorio!");
    scanf("%lf",&x);
    
              if(x> 0 && x<=25){
     printf("Intervalo de [0,25]%lf\n", x);
                               }
                               
                  else if (x>25 && x<=50 ){
        printf("Intervalo de [25,50]%lf\n", x);
                                      }
            else if (x>50 && x<=75){
        printf("Intervalo de [50,75]%lf\n", x);
                                }
    else if (x>75 && x<=100){
        printf("Intervalo de [75,100]%lf\n", x);
    }
    
    else{
        printf("FORA DO INTERVALO!");
    }
    return(0);
}