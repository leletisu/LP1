/* O Campeonato Brasileiro está na reta final com 20 times na disputa.
Uma vitória vale 3 pontos, um empate vale 1 ponto e uma derrota vale 0 pontos. 
Escreva um programa que, para cada time, leia o nome (ou um identificador numérico), 
número de vitórias, número de empates e número de derrotas.
Ao final, o programa deve escrever os nomes (ou identificadores) dos times com mais e menos pontos até o momento.
*/

#include <stdio.h>
#include <string.h>  

int main(void) {
    int i, vitorias, empates, derrotas, pontos;
    int max_pontos = -1, min_pontos = 1000;
    char nome[255];
    char nome_maior[255], nome_menor[255];  
    
    printf("BRASILEIRÃO\n");
    
    for (i = 1; i <= 20; i++) {
        printf("\nTime %d:\n", i);
        
        printf("Nome do time: ");
        scanf("%s", nome);
        
        printf("Vitorias: ");
        scanf("%d", &vitorias);

        printf("Empates: ");
        scanf("%d", &empates);

        printf("Derrotas: ");
        scanf("%d", &derrotas);
        
        pontos = (vitorias * 3) + empates;
        printf("Pontos: %d\n", pontos);
        
        if (pontos > max_pontos) {
            max_pontos = pontos;
            strcpy(nome_maior, nome); 
        }
        
        if (pontos < min_pontos) {
            min_pontos = pontos;
            strcpy(nome_menor, nome); 
        }
    }
    
    printf("\nRESULTADO:\n");
    printf("Time com mais pontos: %s (%d pontos)\n", nome_maior, max_pontos);
    printf("Time com menos pontos: %s (%d pontos)\n", nome_menor, min_pontos);
    
    return 0;
}