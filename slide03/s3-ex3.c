
/* Crie um vetor para guardar 50 temperaturas:
int temps[50];
As temperaturas variam entre -100 e 100.
Leia as 50 temperaturas para o vetor
Calcule a média das temperaturas no vetor
Exiba a quantidade de leituras acima da média calculada
Em vez de int, use o tamanho mais econômico
(Mas lembre-se que o "%d" do scanf só funciona com o tipo int.) */

#include <stdio.h>

int main(void) {
    
    signed char temps[50]; 
    int i, temp, soma = 0, acima_media = 0;
    
    printf("Digite 50 temperaturas (-100 a 100): \n");
    for (i = 0; i < 50; i++) {

        printf("%d: ", i + 1);
        scanf("%d", &temp);
       
        temps[i] = (signed char)temp;
        soma += temps[i];
    }
    
    float media = (float)soma / 50;
    
    for (int i = 0; i < 50; i++) {
        if (temps[i] > media) {
            acima_media++;
        }
    }
    
    printf("Média: %.2f\n", media);
    printf("Temperaturas acima da média: %d\n", acima_media);
    
    return 0;
}
