#include <stdio.h>
int main()
{
float n1,n2,m;

printf("digite sua primeira nota: ");
scanf("%f",&n1);
printf("digite sua segunda nota: ");
scanf("%f",&n2);

m=(n1+n2)/2;

if (m>=7){
    printf("a media do aluno foi %.2f:\n",m);
printf("aluno aprovado, parabens!");
}
else if(m<7){
printf("a media do aluno foi %.2f:\n",m);
printf("aluno de recuperação ");

}
return 0;
}
