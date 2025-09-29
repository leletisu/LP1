#include <stdio.h>

enum Dia {
    Dom, Seg, Ter, Qua, Qui, Sex, Sab
};

char* nome(enum Dia dia) {
    char* semana[7] = {
        "Domingo", "Segunda", "Terca", 
        "Quarta", "Quinta", "Sexta", "Sabado"
    };
        return semana[dia];
}

int main() {
    printf("%s\n", nome(Qui)); 
    return 0;
}
