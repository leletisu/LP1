#include <stdio.h>
#include <math.h>

struct Ponto {
    int x;
    int y;
};

void preenchePonto(struct Ponto *p) {
    printf("Digite o valor de x: ");
    scanf("%d", &p->x);
    printf("Digite o valor de y: ");
    scanf("%d", &p->y);
}

void preencheVetorPontos(struct Ponto v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nPonto %d:\n", i+1);
        preenchePonto(&v[i]);
    }
}

struct Ponto maisDistante(struct Ponto v[], int n) {
    struct Ponto maisLonge = v[0];
    double maiorDistancia = sqrt(pow(v[0].x, 2) + pow(v[0].y, 2));
    
    for (int i = 1; i < n; i++) {
        double dist = sqrt(pow(v[i].x, 2) + pow(v[i].y, 2));
        if (dist > maiorDistancia) {
            maiorDistancia = dist;
            maisLonge = v[i];
        }
    }
    
    return maisLonge;
}

int main() {
    struct Ponto pontos[10];
    preencheVetorPontos(pontos, 10);
    
    struct Ponto resultado = maisDistante(pontos, 10);
    printf("\nPonto mais distante de (0,0): (%d, %d)\n", resultado.x, resultado.y);
    
    return 0;
}
