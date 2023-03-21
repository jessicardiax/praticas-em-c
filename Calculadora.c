
#include <stdio.h>
int main(){
    float n1,n2,r;
    char op
    
                           printf("\n*********CALCULADORA*********\n");
    
         
    printf("'+':para soma\n");
 
    printf("'-':para subtrair \n");
 
    printf("'*':para multiplicacao \n");

    printf("'/':para divisao \n");
    
    
    printf("Informe um numero:");
    scanf("%f",&n1);
    
    
    printf("digite o operador :");
    scanf("%s",&op);
      
      printf("Informe outro numero:");
      scanf("%f",&n2);
      

 
 switch(op){
     
     case '+':
     r=n1+n2;
 printf("O resultado é %.2f.\n",r);
     break;
     
     case '-':
    r= n1-n2;
     printf("O resultado é%.2f.\n",r);
     break;
     
     case '*':
    r= n1*n2;
     printf("O resultado é %.2f.\n",r);
     break;
     
     case '/':
    r= n1/n2;
     printf("O resultado é %.2f.\n",r);
     break;
     
 }
 return(0);     
}
