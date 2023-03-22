

 #include<stdio.h>
 int main(){
   float vt;
  int m;
     
     printf("Informe a quantidade de maças:");
     scanf("%i",&m);
     
     if (m<=11){
         (vt=m*1.30);
         printf("A unidade das maças sai por 1.30 %.2f",vt);
     }
     else{
     if(m>=12)
         (vt=m*1.10);
         printf("A unidade das maças sai por 1.10 %2.f",vt);
     }
 
    return(0);
    }
    
    
    
    
