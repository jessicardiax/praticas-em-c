#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
int suc,ant,n;
    printf("informe um numero:");
    scanf("%i",&n);
    ant=n-1;
    suc=n+1;
    printf("O antecessor do numero é: %i\n", ant);
    printf("O sucessor do numero é: %i\n " ,suc);


return(0);
    }
