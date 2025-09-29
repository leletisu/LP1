#include <stdio.h>
#include <string.h>

union Cidadao{
    int rg;
    int cpf;
    char nome[256];
};

int main(void){
   union Cidadao c1;
   c1.rg = 123456789;
   
   union Cidadao c2;
   c2.cpf = 987654321;
   
   union Cidadao c3;
   strcpy(c3.nome, "Alguém");
   
   printf("RG: %d\n", c1.rg);
   printf("CPF: %d\n", c2.cpf);
   printf("Nome: %s\n", c3.nome);
    
    return 0;
}
