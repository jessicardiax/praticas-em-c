#include<stdio.h>
#include<locale.h>
 int um_de_dois (int n1,int n2);
 
      int main(){
     setlocale(LC_ALL,"portuguese");
     int r;
     r = um_de_dois (100, 20);
     printf("O valor é %i\n",r);
     return(0);
                }
  int um_de_dois (int n1,int n2){
      if (n1>n2){
          return (n1);
      }
      else{
          return(n2);
      }
  }
