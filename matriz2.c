#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i, j, A[2][3], B[2][3],x=1;
	
     	for(i = 0; i <= 1; i++)   {
		for (j = 0; j<=2; j++){		
          printf("Digite o %iº numero inteiro da matriz A:",x++);
             scanf("%i", &A[i][j]);   							
                               }
                               }
     x=1;
     printf("\n");
      for(i = 0; i <= 1; i++)   {
       for (j = 0; j<=2; j++)   {
	   printf("Digite o %iº valor da Matriz B",x++);
	       scanf("%i", &B[i][j]);
	            				}
								}
	printf("\n MATRIZ B:\n ");
	for(i = 0; i <= 1; i++)   {
       for (j = 0; j<=2; j++)  {			
printf("%i", A[i][j] + B[i][j]);
}
printf("\n");
}
return (0);
}
