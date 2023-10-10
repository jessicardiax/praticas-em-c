
#include<stdio.h>
    int main(){
        float a[5];
        float b[5];
        int i;
        
        printf("Informe 5 numeros reais:");
            for (i=0; i<5; i++){
                printf("nº %d\n", i + 1);
                scanf("%f",&a[i]);
            }
      for(i = 0; i<5; i++){
          if(i==0){
          b[i]=a[i];    
          }
          else if(i%2==0){
          b[i]=a[i]*5;    
          }
          else {
              b[i]=a[i]+ 5;
          }
          }
          
          printf("O conteudo do vetor a\n");
          for(i=0; i<5; i++){
              printf("%2.f\n",a[i]);
          }
          
          printf("\n");
          
          printf("O conteudo do vetor b\n");
          for(i=0; i<5; i++){
            printf("%2.f\n", b[i]);

          }
          
     
          
          return 0;
    }
    
