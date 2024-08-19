
//Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

#include<stdio.h>

void main() {

    int tempo, ano, mes, dia;

    printf("quantos dias ?\n");

    scanf("%d",&tempo);

    ano = tempo / 365;
    tempo = tempo - (ano * 365);
    
    mes = tempo / 30;
    tempo = tempo - (mes * 30);

    dia = tempo;

    printf("%d ano(s) \n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s) \n",dia);

}
