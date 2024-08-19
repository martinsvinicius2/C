#include <stdio.h>
#include <stdbool.h>

bool e_primo(int numero);

int main() {
    int P;
    
    printf("Digite um número par maior que 4: ");
    scanf("%d", &P);

    if (P <= 4 || P % 2 != 0) {
        printf("Número inválido. Por favor, insira um número par maior que 4.\n");
        return 1;
    }
    for (int i = 2; i <= P / 2; ++i) {
        if (e_primo(i) && e_primo(P - i)) {
            printf("%d + %d = %d\n", i, P - i, P);
            return 0;
        }
    }
    printf("Não foi possível encontrar dois números primos que somados resultem em %d.\n", P);
    return 1;
}
bool e_primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero == 2) {
        return true;
    }
    if (numero % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}
