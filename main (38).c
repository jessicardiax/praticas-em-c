
#include<stdio.h>
int main(){
    int n;

printf("Informe o valor de n\n");
    scanf("%d",&n);
    
    
    int mat[n][n];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
        mat[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        mat[i][n - 1 -i]=1;
    }
    printf("Matriz resultante\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          printf("%d", mat[i][j]);  
        }
        printf("\n");
    }
    
  return 0;  
}