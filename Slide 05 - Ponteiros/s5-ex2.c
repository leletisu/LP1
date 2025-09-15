#include <stdio.h>

void compra(int* conta, int valor) {
    *conta = *conta - valor;
}

int main() {
    int minha_conta1, minha_conta2;
    
    printf("Digite o saldo da conta 1: ");
    scanf("%d", &minha_conta1);
    printf("Digite o saldo da conta 2: ");
    scanf("%d", &minha_conta2);
    
    printf("Saldos iniciais: Conta 1 = %d, Conta 2 = %d\n", minha_conta1, minha_conta2);
    
    if (minha_conta1 >= minha_conta2) {
        compra(&minha_conta1, 500);
    } else {
        compra(&minha_conta2, 500);
    }
    
    printf("Saldos finais: Conta 1 = %d, Conta 2 = %d\n", minha_conta1, minha_conta2);
    
    return 0;
}
