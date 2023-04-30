/*/Elabore um programa que solicita e armazena 3 notas de 5 alunos em uma matriz 5
x 3. Por fim, calcula e exibe a média aritmética obtida por cada aluno./*/
#include<stdio.h>
#include<locale.h>
  int main(){
    setlocale(LC_ALL, "portuguese");
float notas[5][3];
float media;
int i, j;

//Solicitação e armazenamento de notas dos alunos
for (i=0; i<=4; i++){
 printf("Digite as 3 notas do aluno %i:\n",i+1);
for (j=0; j<=2; j++){
    scanf("%f",&notas[i][j]);
                    }
                    }

//Calculando e exibindo a media aritimerica de cada aluno  
for (i=0; i<=4; i++){
    media=0;
    for (j=0; j<=2; j++){
    media+= notas [i][j];
    }
    media/=3;
    printf("Aluno %i: %.2f\n",i+1, media);
}
return(0);
}

  
  
