/*Crie uma função todos_os_primos que recebe um inteiro max e exibe todos os primos entre 1 e max.

Use a função eh_primo do exercício anterior sem alterá-la.*/

#include <stdio.h>

int eh_primo(int n) {
    if (n <= 1) {
        return 0; 
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

void todos_os_primos(int max) {
    printf("Números primos entre 1 e %d: ", max);
    
    for (int i = 1; i <= max; i++) {
        if (eh_primo(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int max;
    
    printf("Digite o valor máximo: ");
    scanf("%d", &max);
    
    todos_os_primos(max);
    
    return 0;
}
