//Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L.
//Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas)
//e a velocidade média durante a mesma (em km/h).Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários.
//Mostre o valor com 3 casas decimais após o ponto.

#include<stdio.h>

void main (){

int tempo;
int kilometragem;
float gasto;

printf("quanto tempo foi gasto ?\n");
scanf("%d",&tempo);

printf("velocidade media ?\n");
scanf("%d",&kilometragem);

gasto = (tempo * kilometragem) / 12.0;

printf("%.3f\n",gasto);

};