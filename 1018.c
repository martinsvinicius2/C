#include<stdio.h>

void main() {

    int valor;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    int numeros_cedulas[7];
    int i;

    printf("Qual o valor?\n");

    scanf("%d", &valor);

    printf("Valor: %d\n", valor);
    for(i = 0; i < 7; i++) {
        numeros_cedulas[i] = valor / cedulas[i];
        valor = valor % cedulas[i];
    }

    for(i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", numeros_cedulas[i], cedulas[i]);
    }
}
