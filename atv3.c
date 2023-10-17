//Escreva um programa que crie uma matriz quadrada M de tamanho (3 x 3). Após feita a leitura de todos os valores, os elementos acima e abaixo da diagonal principal devem ser substituídos por zeros “0”. Imprima no final a matriz obtida.//

#include<stdio.h>
int main(){
    int M[3][3];
    
    printf("Informe os valores da matriz (3x3)\n");
    for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
           scanf("%d",&M[i][j]);  
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; i<3; i++){
            if(i!=j && i + j !=2){
                M[i][j]=0;
            }
        }
    }
    printf("\nmatriz obtida\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", M[i][j]);
    }
    printf("\n");
   
}
   return 0;
}