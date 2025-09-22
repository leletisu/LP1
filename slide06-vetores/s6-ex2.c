#include <stdio.h>

int main(void) {
    int vet[5];
    int I;
    
    printf("Digite 5 números:\n");
    for(int i = 0; i < 5; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vet[i]);
    }
    
    printf("\nVetor:\n");
    for(int i = 0; i < 5; i++) {
        printf("| %d ", vet[i]);
    }
    printf("|\n");
    
    printf("\nDigite o índice a ser removido (0-4): ");
    scanf("%d", &I);
    
    for(int i = I; i < 4; i++) {
        vet[i] = vet[i + 1];
    }
   
    vet[4] = 0;
    
    printf("\nVetor após remover índice %d:\n", I);
    for(int i = 0; i < 5; i++) {
        printf("| %d ", vet[i]);
    }
    printf("|\n");
    
    return 0;
}
