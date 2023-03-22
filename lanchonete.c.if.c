/*CÓDIGO DO ITEM ESPECIFICAÇÃO PREÇO UNITÁRIO
A Lanchonete Coma Bem deseja informatizar o seu estabelecimento visando melhor
atender seus clientes. Para isso, decidiu trabalhar com pedidos realizados em seu
aplicativo, disponível em dispositivos eletrônicos dispostos no local. Você foi
contratado para criar um sistema para tal lanchonete. O cardápio da lanchonete está
ilustrado na tabela a seguir.
CÓDIGO DO ITEM ESPECIFICAÇÃO PREÇO UNITÁRIO
100 Cachorro quente 8,00
101 Bauru 9,00
102 X-Salada 10,00
103 Hambúrguer 12,00
104 Refrigerante (lata) 3,00*/

#include <stdio.h>

int main()
{
int codigo, valor, quant;
printf ("digite o codigo do item");
scanf("%i",&codigo);
if (codigo ==100){
printf("cachorro quente,valor é R$8.00");
}
else if (codigo ==101){
printf("Bauru,valor é R$9.00");
}
else if (codigo ==102){
printf("X-salada, valor é R$10.00");
}
else if(codigo ==103){
printf("hamburguer, valor é R$12.00");
}
else if (codigo ==104){
printf("refrigerante, valor é R$3.00 ");
}
return 0;
}
104 Refrigerante (lata) 3,00
