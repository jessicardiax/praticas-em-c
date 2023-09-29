
 #include<stdio.h>
 
 void kaal(float cal){
     
     if (cal<2000){
         printf("Dieta hipocalórica\n");
     }
     
     else if(cal>2000){
         printf("Dieta hipercalórica\n");
     }
     else if (cal==2000){
         printf("Dieta Basal\n");
     }
    
}
 
 int main(){
     float cal;
     
     printf("Informe a quantidade de calorias consumidas\n");
     scanf("%f", &cal);
     
     kaal(cal);
     
     
     return 0;
 }
 
