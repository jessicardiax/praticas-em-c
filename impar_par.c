#include<stdio.h>
#include<locale.h>
void verifica (int x);

    int main(){
        setlocale(LC_ALL, "portuguese");
        int n;
        printf("Informe um numero:");
        scanf("%i",&n);
        verifica (n);
        return (0);
        
}
void verifica (int x){
     if (x % 2==0){
         printf("%i é par",x);
     }
            else{
                printf("%i é impar",x);
            }
}
