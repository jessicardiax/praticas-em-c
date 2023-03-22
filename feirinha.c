/*/4. Um feirista vende suas maças a R$ 1,30 por unidade, se forem compradas menos de 
uma dúzia, e a R$ 1,10 por unidade, se forem compradas pelo menos uma dúzia. 
Sabendo disso, crie um programa que solicita e lê a quantidade de maças desejadas, 
calcula e informa o preço a ser pago pelo cliente, considerando os preços definidos 
anteriormente/*/

 #include<stdio.h>
 int main(){
   float vt;
  int m;
     
     printf("Informe a quantidade de maças:");
     scanf("%i",&m);
     
     if (m<=11){
         (vt=m*1.30);
         printf("Valor total :%.2f\n",vt);
     }
     else{
     if(m>=12)
         (vt=m*1.10);
         printf("Valor total: %2.f\n",vt);
     }
 
    return(0);
    }
    
    
    
    
