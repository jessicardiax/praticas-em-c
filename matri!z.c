//Crie um programa que solicita e armazena doze números inteiros em uma matriz 3 x 
//4. Em seguida, exiba os elementos da matriz na ordem inversa.//

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int i, n,x=1,mat[3][4];
     
    for(i=0; i<=2 ; i++){
        for (n=0; n<=3; n++){
             printf("Informe o %iº numero: ",x++);
            scanf("%i",&mat[i][n]);
        }
    }

    printf("\nMATRIZ\n");

    for(i = 2; i>=0 ; i--){
        for (n = 3; n>=0; n--){
            printf("%i     ", mat[i][n]);
        }
        printf("\n");
    }

    return(0);
}
