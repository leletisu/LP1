/*Crie uma função eh_primo que recebe um inteiro n e retorna se ele é primo ou não.*/

#include <stdio.h>

int eh_primo(int n) {
    if (n <= 1) {
        return 0;
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; 
    }
    
    return 1; 
}
}

int main() {
    int num;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    eh_primo(num);

    if (num == 1) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
