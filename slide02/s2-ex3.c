/* Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. 
Ele não quer gastar mais do que 1000 reais. Um dólar está custando 3.17 reais. 
Faça um programa que leia o preço de um celular em dólares e, 
caso seja um bom negócio, escreva BOM NEGÓCIO. */

#include <stdio.h>

int main(void){
    
    float preco_dolar, preco_real;
    const float dolar = 3.17;
    
    printf("Insira o preço do celular em dólares: ");
    scanf("%f", &preco_dolar);
    
    preco_real = preco_dolar * dolar;
    
    if(preco_real <= 1000){
        printf("BOM NEGÓCIO!\n");
        printf("Preco em reais: R$ %.2f\n", preco_real);
    }
    else{
        printf("MAU NEGÓCIO!\n");
        printf("Preco em reais: R$ %.2f\n", preco_real);
    }
    
    return 0;
}
