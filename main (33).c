

#include<stdio.h>
#include<locale.h>
 int main(){
      setlocale(LC_ALL, "portuguese");
    int i,j,n, k;
    
    printf("digite um valor ");
    scanf("%i", &n);
         
         for(i=1; i<=n; i++){
         
             for (k=1; k<=n-i; k++){
                printf(" ");
             }
             
             for(j=1; j<=i; j++){
                 printf("* ");
             }
             printf("\n");
         
         } 
      return(0);
 }