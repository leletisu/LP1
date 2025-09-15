#include <stdio.h>

void troca(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int x = 10, y = 20;
    
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("Depois da troca: x = %d, y = %d\n", x, y);
    
    return 0;
}
