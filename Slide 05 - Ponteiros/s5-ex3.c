#include <stdio.h>

void compra(int* conta, int valor) {
    *conta = *conta - valor;
}

int main() {
    int minha_conta1, minha_conta2;
    int compras[] = {100, 50, 80, 30, 20};
    int num_compras = 5;
    int i = 0;  
    
    printf("Digite o saldo da conta 1: ");
    scanf("%d", &minha_conta1);
    printf("Digite o saldo da conta 2: ");
    scanf("%d", &minha_conta2);
    
    printf("Saldos iniciais: Conta 1 = %d, Conta 2 = %d\n", minha_conta1, minha_conta2);
    
    while (i < num_compras) {
        if (minha_conta1 >= minha_conta2) {
            compra(&minha_conta1, compras[i]);
        } else {
            compra(&minha_conta2, compras[i]);
        }
        printf("Saldos atuais [-R$%d]: Conta 1 = %d, Conta 2 = %d\n", 
               compras[i], minha_conta1, minha_conta2);
        i++; 
    }
    
    printf("Saldos finais: Conta 1 = %d, Conta 2 = %d\n", minha_conta1, minha_conta2);
    
    return 0;
}
