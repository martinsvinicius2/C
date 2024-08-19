#include <stdio.h>
#include <stdbool.h>

// Prototipação das funções
bool ehPrimo(int numero);
int numeroPerfeito(int n);

int main() {
    int X, Y;
    printf("Digite o valor de X: ");
    scanf("%d", &X);
    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    int menorPerfeito = numeroPerfeito(X);
    int maiorPerfeito = numeroPerfeito(Y);

    printf("O %d numero perfeito e: %d\n", X, menorPerfeito);
    printf("O %d numero perfeito e: %d\n", Y, maiorPerfeito);

    // Somar números primos entre menorPerfeito e maiorPerfeito
    int somaPrimos = 0;
    for (int i = menorPerfeito + 1; i < maiorPerfeito; i++) {
        if (ehPrimo(i)) somaPrimos += i;
    }

    printf("a soma dos numeros primos entre %d e %d e %d\n", menorPerfeito, maiorPerfeito, somaPrimos);

    return 0;
}

// Função para verificar se um número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

// Função para encontrar o n-ésimo número perfeito
int numeroPerfeito(int n) {
    int contador = 0;
    int numero = 1;
    while (contador < n) {
        int soma = 0;
        for (int i = 1; i <= numero / 2; i++) {
            if (numero % i == 0) soma += i;
        }
        if (soma == numero) contador++;
        numero++;
    }
    return numero - 1;
}
