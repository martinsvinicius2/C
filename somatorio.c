//Escreva um programa que imprima a soma de todos os números de 1 até 100. Ou seja, ele calculará o resultado de 1+2+3+4+...+100;

#include<stdio.h>

int main(){
int i = 1;
int somatorio;

    while (i<=100){

       printf("numero %d\n",i);
       i++;
       somatorio = somatorio + i; 
    }
    printf("somatorio = %d",somatorio);
}