#include <stdio.h>

enum boolean {
    false,
    true, 
};

int main(void) {
    enum boolean v = true;
    
    if (v) {
        printf("Verdadeiro");
    } else {
        printf("Falso");
    }
    
    return 0;
}
