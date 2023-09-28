 #include<stdio.h>
 float caixa( float comp, float larg, float alt){
    float vol = comp*larg*alt;
    return vol;
 }
 
 int main(){
     float comp,larg,alt,resultado;
     
     printf("Informe o comprimento da caixa:\n");
     scanf("%f", &comp);
    
        printf("Informe a largura da caixa:\n");
        scanf("%f",&larg);
        
            printf("Informe a altura da caixa\n");
            scanf("%f",&alt);
      
      resultado = caixa(comp, larg, alt);
      
      printf("O volume da caixa é %2.f\n",resultado);

return 0;
 }

