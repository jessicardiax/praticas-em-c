/*/Faça um programa que leia o sexo e a altura de uma pessoa e calcule o seu peso ideal,
utilizando as seguintes fórmulas:
• para homem: (72.7 x h) – 58
• para mulher: (62.1 x h) – 44.7
/*/

#include <stdio.h>
#include<locale.h>

int main()
{
  float peso_ideal, alt;
  char sexo;
  
  setlocale(LC_ALL, "portuguese");
  
  printf("Informe seu sexo 'H' ou 'M'\n");
  scanf("%c",&sexo);

    printf ("Informe sua altura em metros:\n");
    scanf("%f",&alt);
    
   
    if (sexo=='H'){
        peso_ideal=(72.7*alt) - 58;
        printf("O peso ideal para um homem com %.2f de altura é de %.2f Kg\n",alt,peso_ideal);
                  }
    else if (sexo=='M'){
         peso_ideal=(62.1*alt) - 44.7;
        printf("O peso ideal para uma mulher com %.2f de altura é de %.2f Kg\n", alt,peso_ideal);
                       }
    else{
        printf("Sexo invalido, Informe 'H'para Homem ou 'M' para mulher!");
        }

    return 0;
}
