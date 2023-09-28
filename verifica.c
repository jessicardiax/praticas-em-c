

#include<stdio.h>
#include<locale.h>
  void verificaidd(int iidade){
      
      if (iidade>=18){
          printf("Maior de idade\n");
      }
      else{
          printf("Menor de idade\n");
      }

  }
 
 int main(){
    
    int idade;
        
        printf("Informe sua idade!\n");
        scanf("%i", &idade);
    
    verificaidd(idade);
    
return 0;
 }
