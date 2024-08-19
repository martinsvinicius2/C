//Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

#include <stdio.h>

int main() {
    int duracao, horas, minutos, segundos;

    printf("Digite a duração do evento em segundos: ");
    scanf("%d", &duracao);

    
    horas = duracao / 3600;
    duracao = duracao % 3600; 
    minutos = duracao / 60; 
    segundos = duracao % 60; 

    printf("%2d:%2d:%2d\n", horas, minutos, segundos);

    return 0;
}
