#Ler dois números n1 e n2 e exibir todos os números entre n1 e n2 

n1 = int(input("Insira o primeiro número: "))
n2 = int(input("Insira o segundo número: "))

print(f"Números entre {n1} e {n2}:", end=" ")
for n in range(n1+1, n2):
    print(n, end=" ")