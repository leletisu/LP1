
#include <stdio.h>

//Faça um programa que leia dois valores e exiba o maior valor lido.

int main(void){
   float n1, n2;
  
   printf("Digite dois valores: ");
   scanf("%f %f", &n1, &n2);

   if (n1 > n2){
       printf("Maior número: %.2f\n", n1);  
   }
   else{
       printf("Maior número: %.2f\n", n2);
   }
   return 0;
}