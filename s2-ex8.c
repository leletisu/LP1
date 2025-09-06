/* Ler dois números n1 e n2
Exibir todos os números entre n1 e n2 */

#include <stdio.h>

int main(void){

    int n1, n2;

    printf("Insira dois números: ");
    scanf("%d %d", &n1, &n2);

    printf("Números entre %d e %d: ", n1, n2);
    for (int n = n1+1; n < n2; n++) 
    printf("%d ", n);

    return 0;
}