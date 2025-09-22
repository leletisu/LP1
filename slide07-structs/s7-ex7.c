#include <stdio.h>
#include <string.h>

struct PersonagemGenshin {
    char nome[50];
    char elemento[20];
    char nacao[20];
    char tipoArma[20];
    int nivel;
    int constelacao;
    float taxaCritica;
    float danoCritico;
};

void preenchePersonagem(struct PersonagemGenshin* p) {
    printf("\nPERSONAGENS - GENSHIN IMPACT\n");
    
    printf("Nome do personagem: ");
    scanf(" %[^\n]", p->nome);
    
    printf("Elemento (Anemo/Geo/Electro/Dendro/Hydro/Pyro/Cryo): ");
    scanf(" %[^\n]", p->elemento);
    
    printf("Nacao (Mondstadt/Liyue/Inazuma/Sumeru/Fontaine/Natlan/Snezhnaya): ");
    scanf(" %[^\n]", p->nacao);
    
    printf("Tipo de arma (Espada/Espadao/Lanca/Catalisador/Arco): ");
    scanf(" %[^\n]", p->tipoArma);
    
    printf("Nivel (1-90): ");
    scanf("%d", &p->nivel);
    
    printf("Constelacao (0-6): ");
    scanf("%d", &p->constelacao);
    
    printf("Taxa critica (%%): ");
    scanf("%f", &p->taxaCritica);
    
    printf("Dano critico (%%): ");
    scanf("%f", &p->danoCritico);
}

void exibirPersonagem(const struct PersonagemGenshin* p) {
    printf("\n --- %s --- \n", p->nome);
    printf("Elemento: %s\n", p->elemento);
    printf("Nacao: %s\n", p->nacao);
    printf("Arma: %s\n", p->tipoArma);
    printf("Nivel: %d\n", p->nivel);
    printf("Constelacao: C%d\n", p->constelacao);
    printf("Criticos: %.1f%% de taxa critica / %.1f%% de dano critico\n", p->taxaCritica, p->danoCritico);
}

int main() {
    struct PersonagemGenshin personagem;
    
    preenchePersonagem(&personagem);
    
    exibirPersonagem(&personagem);
    
    return 0;
}
