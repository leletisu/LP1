#include <stdio.h>

#define L 10 
#define C 10  

void preenche(int arr[L][C], int l, int c) {
    printf("Digite %d numeros para preencher a matriz %dx%d:\n", l * c, l, c);
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

float media(int arr[L][C], int l, int c) {
    int soma = 0;
    int total_elementos = l * c;
    
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            soma += arr[i][j];
        }
    }
    
    return (float)soma / total_elementos;
}

void exibe_matriz(int arr[L][C], int l, int c) {
    printf("\nMatriz %dx%d:\n", l, c);
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[L][C];
    int linhas, colunas;
    
    printf("Digite o numero de linhas (max %d): ", L);
    scanf("%d", &linhas);
    printf("Digite o numero de colunas (max %d): ", C);
    scanf("%d", &colunas);
    
    preenche(matriz, linhas, colunas);
    
    exibe_matriz(matriz, linhas, colunas);
    
    float m = media(matriz, linhas, colunas);
    printf("\nMedia dos elementos: %.2f\n", m);
    
    return 0;
}
