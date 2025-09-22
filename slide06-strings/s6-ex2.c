#include <stdio.h>

int tamanho(char* str) {
    int contador = 0;
    while (str[contador] != '\0') {
        contador++;
    }
    return contador;
}

void concatena(char* d, char* o1, char* o2) {
    int i, j;
    int tam_o1 = tamanho(o1);
    int tam_o2 = tamanho(o2);
    
    for (i = 0; i < tam_o1; i++) {
        d[i] = o1[i];
    }
    
    for (j = 0; j < tam_o2; j++) {
        d[i + j] = o2[j];
    }
    
    d[i + j] = '\0';
}

int main() {
    char destino[100];
    
    concatena(destino, "Hello", " World!");
    printf("Teste 1: '%s'\n", destino);
    
    concatena(destino, "Concat", "enacao");
    printf("Teste 2: '%s'\n", destino);
    
    return 0;
}
