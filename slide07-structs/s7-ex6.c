#include <stdio.h>
#include <string.h>

struct Atleta {
    char nome[50];
    int idade;
    char posicao[30];
    char time[40];
    int numero_camisa;
    float altura;
    int gols_marcados;
};

void exibirAtleta(struct Atleta a) {
    printf("=== DADOS DO ATLETA ===\n");
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d anos\n", a.idade);
    printf("Posição: %s\n", a.posicao);
    printf("Time: %s\n", a.time);
    printf("Nº Camisa: %d\n", a.numero_camisa);
    printf("Altura: %.2f m\n", a.altura);
    printf("Gols Marcados: %d\n", a.gols_marcados);
    printf("------------------------\n\n");
}

int main(void) {
    struct Atleta atleta1;
    strcpy(atleta1.nome, "Giorgian De Arrascaeta");
    atleta1.idade = 31;
    strcpy(atleta1.posicao, "Meio-Campista");
    strcpy(atleta1.time, "Flamengo");
    atleta1.numero_camisa = 10;
    atleta1.altura = 1.72;
    atleta1.gols_marcados = 159;
    
    struct Atleta atleta2;
    strcpy(atleta2.nome, "Cole Palmer");
    atleta2.idade = 23;
    strcpy(atleta2.posicao, "Meio-Campista");
    strcpy(atleta2.time, "Chelsea");
    atleta2.numero_camisa = 10;
    atleta2.altura = 1.85;
    atleta2.gols_marcados = 51;
    
    struct Atleta atleta3;
    strcpy(atleta3.nome, "Lionel Messi");
    atleta3.idade = 38;
    strcpy(atleta3.posicao, "Atacante");
    strcpy(atleta3.time, "Inter Miami");
    atleta3.numero_camisa = 10;
    atleta3.altura = 1.70;
    atleta3.gols_marcados = 887;
    
    printf("EXEMPLOS DE ATLETAS DE FUTEBOL\n\n");
    
    exibirAtleta(atleta1);
    exibirAtleta(atleta2);
    exibirAtleta(atleta3);
    
    return 0;
}
