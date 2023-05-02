#include<stdio.h>
 int f(int n);
 
 int main(){
 int x=2,y=1;
 printf("%i\n",f(x-y));
 return (0);
 }
  int f(int n){
      if (n){
          return (n*(n+2));
      }
      else{
      
      return(1);
  }
  }
