/*/Escrever um programa que lê a hora de início e hora de término de um jogo, 
ambas subdivididas em dois valores distintos: horas e minutos. 
Calcular e escrever a duração do jogo, também em horas e minutos, considerando que o tempo 
máximo de duração da partida do jogo é de 3 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte./*/

#include<stdio.h>
#include<locale.h>

  int main(){
      setlocale(LC_ALL ,"portuguese");
      
      int hr_inc,min_inc, hr_fim,fim_hr,fim_min,duracaomin,duracaohr;
      
      printf("Informe a hora do inicio do jogo\n");
            scanf("%i",&hr_inc);
            
        printf("Informe o minuto do inicio do jogo\n");
            scanf("%i",&min_inc);
            
          printf("Informe a hora do fim do jogo:\n");
             scanf("%i",&hr_fim);
      
       printf("Informe o minutodo fim do jogo:\n");
             scanf("%i" , &fim_min);
             
      duracaomin=(hr_fim*60 +fim_min)-(hr_inc*60 + min_inc);
      
      if (duracaomin<=0){
          duracaohr=24+(duracaomin/60);
      }
      else {
          duracaohr=duracaomin/60;
      }
      duracaomin=duracaohr/60;
      printf("Duração do jogo: %d horas e %d minutos.\n", duracaohr, duracaomin);
  }