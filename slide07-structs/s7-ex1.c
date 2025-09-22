#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

int main() {
    struct Personagem personagem1;
    personagem1.forca = 10;
    personagem1.energia = 50;
    personagem1.experiencia = 30;
    
    struct Personagem personagem2 = {18, 20, 25};
    
    printf("PERSONAGENS \n");
    printf("Personagem 1:\n");
    printf("  Forca: %d\n", personagem1.forca);
    printf("  Energia: %d\n", personagem1.energia);
    printf("  Experiencia: %d\n", personagem1.experiencia);
    
    printf("\nPersonagem 2:\n");
    printf("  Forca: %d\n", personagem2.forca);
    printf("  Energia: %d\n", personagem2.energia);
    printf("  Experiencia: %d\n", personagem2.experiencia);
    
    return 0;
}
