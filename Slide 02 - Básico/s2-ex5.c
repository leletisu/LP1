/*Faça um programa que leia números continuamente até que seja digitado 0.
 Ao final, o programa deve exibir a soma de todos os números lidos.*/

#include <stdio.h>

int main(void){
   int num, soma = 0;

   printf("Digite um número: ");
   scanf("%d", &num);

   while(num != 0){
       soma = soma + num;
       printf("Digite um número (digite 0 para parar): ");
       scanf("%d", &num);
   }
   printf("Soma dos números: %d", soma);
  
   return 0;
} 
