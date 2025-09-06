/* Faça um programa que leia um número N
e calcule a soma dos quadrados de 1 até N. */

#include <stdio.h>

int main(void) {
    int n, i, somatorio = 0;

    printf("Insira o valor de N: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        somatorio += i * i; 
    }
    
    printf("Soma dos quadrados de 1 até %d: %d\n", n, somatorio);
    
    return 0;
}
