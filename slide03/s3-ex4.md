- Qual é a diferença entre tipagem estática e dinâmica?

  Na tipagem estática, os tipos de dados são verificados durante a compilação. Já na tipagem dinâmica, os tipos são verificados durante a execução.

- Dê exemplos de linguagens que usem tipagem estática e exemplos de linguagens que usem tipagem dinâmica.

  **Tipagem estática:** C, C++ e Java.
  
  **Tipagem dinâmica:** Python e JavaScript.

- Por quê uma linguagem com tipagem estática é tipicamente mais rápida do que uma com tipagem dinâmica? Justifique usando um exemplo

A tipagem estática é mais rápida do que a tipagem dinâmica pois os tipos são verificados em tempo de compilação, permitindo que o compilador gere código de máquina otimizado e elimine verificações desnecessárias durante a execução.

Exemplo de tipagem estática (C): 

````
    int a = 5; b = 10;
    int soma = a + b; // compilador já sabe que é soma de inteiros
````

Exemplo de tipagem dinâmica (Python):

````
a = 5
b = 10
soma = a + b  # precisa verificar os tipos durante a execução para decidir qual operação realizar.
````
