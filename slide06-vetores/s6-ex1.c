#include <stdio.h>

void preenche(int* xs, int n) {
    for(int i = 0; i < n; i++) {
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", xs + i); 
    }
}

float media(int* xs, int n) {
    int soma = 0;
    for(int i = 0; i < n; i++) {
        soma += *(xs + i);
    }
    return (float)soma / n;
}

int main(void) {
    int vec[100];
    int qnt;
    
    printf("Quantidade de elementos do vetor? (Máx 100): ");
    scanf("%d", &qnt);
    
    preenche(vec, qnt);
    
    double resultado = media(vec, qnt);
    printf("A média dos valores é: %.2f\n", resultado);
    
    return 0;
}
