#include <stdio.h>

struct Ponto {
    float x;
    float y;
    float z;
};

int main() {
    struct Ponto v1 = {1.0, 0.0, 5.0};
    struct Ponto v2 = {3.0, 3.0, 3.0};
    struct Ponto v3 = {0.0, 10.0, 0.0};
    
    printf("Coordenada y dos pontos:\n");
    printf("v1.y = %.1f\n", v1.y);
    printf("v2.y = %.1f\n", v2.y);
    printf("v3.y = %.1f\n", v3.y);
    printf("\n");

    v1.z += 10.0;
    v2.z += 10.0;
    v3.z += 10.0;

    printf("Coordenadas de v2 apos adicao:\n");
    printf("v2.x = %.1f\n", v2.x);
    printf("v2.y = %.1f\n", v2.y);
    printf("v2.z = %.1f\n", v2.z);
    printf("\n");
    
    printf("Todos os pontos apos adicao:\n");
    printf("v1: (%.1f, %.1f, %.1f)\n", v1.x, v1.y, v1.z);
    printf("v2: (%.1f, %.1f, %.1f)\n", v2.x, v2.y, v2.z);
    printf("v3: (%.1f, %.1f, %.1f)\n", v3.x, v3.y, v3.z);
    
    return 0;
}
