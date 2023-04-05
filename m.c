
#include <stdio.h>

int main(){
  int cont = 0;
   while(cont < 10){
       if (cont==5){
           break;
       }
       printf("%i",cont);
       cont= cont + 1;
   }
 printf("fim\n");
    return 0;
}
