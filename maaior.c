
#include <stdio.h>
int main(){
    int N1,N2,N3,maior;
    printf("digite um numero:\n");
    scanf("%d",&N1);
    printf("digite outro numero:\n");
    scanf("%d",&N2);
    printf("digite outro numero:\n");
    scanf("%d",&N3);

maior=N1;
    if (N2>maior){
        maior=N2;

    }
     if (N3>maior){
        maior=N3;
    }
        printf("o maior numero é:%.d\n",maior);

    return 0;
} 
