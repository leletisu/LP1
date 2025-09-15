Considere o programa a seguir:

````
#include <stdio.h>
void main (void) {
    printf("Soma = %d\n", 100-"10");
}
````
- O que você espera que aconteça ao compilar o programa? Por quê?

  O esperado é um erro de compilação. Porque a operação de soma possui tipos incompatíveis.

- Quais são os tipos dos operandos na operação de subtração?

  **100:** inteiro

  **"10":** string/cadeia de caracteres
  
- Transcreva a mensagem de erro de compilação e a explique.

````
teste.c: In function 'main':
teste.c:4:30: error: invalid operands to binary - (have 'int' and 'char *')
     printf("Soma = %d\n", 100-"10");
````

O erro ocorre porque "10" não é o **número** 10, e sim uma **string** (que é tratada como um ponteiro (char *)).
Assim, a operação 100 - "10" tenta subtrair um inteiro de uma string, o que não é permitido, gerando o erro.
