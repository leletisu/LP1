#include <stdio.h>

int tamanho(char* str) {
    int contador = 0;
    
    while (str[contador] != '\0') {
        contador++;
    }

    return contador;
}

int main() {
    char texto1[] = "";
    char texto2[] = "Hello World!";
    
    printf("Tamanho da string vazia: %d\n", tamanho(texto1));  
    printf("Tamanho de '%s': %d\n", texto2, tamanho(texto2));
    
    return 0;
}
