#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("*********************\n");
    printf("* bem vindo ao jogo *\n");
    printf("*********************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    double pontosperdidos = 0;
    int numerodetentativas;
    int acertou;
    int nivel;

    printf("qual o nivel de dificuldade ?\n");
    printf("(1)facil (2)medio (3)dificil (4)impossivel\n\n");
    printf("escolha:");
    scanf("%d",&nivel);

    switch (nivel)
    {
    case 1:
         numerodetentativas = 20;
        break;
    case 2:
         numerodetentativas = 15;
        break;
    case 3:
         numerodetentativas = 5;
        break;    
    default:
        numerodetentativas = 3;
        break;
    }

    
  for(int i = 1; i <= numerodetentativas; i++){

    printf("tentativa %d\n\n", tentativas);
    printf("Qual e o seu chute ?\n");
    
    scanf("%d",&chute);
    printf("seu chute foi %d\n",chute);

    if(chute < 0){
        printf("voce nao pode chutar numeros negativos\n");
        continue;
    }
     acertou = (chute == numerosecreto);
     int maior = chute > numerosecreto;

        if(acertou){
                break;
        }
        else if(maior){
            printf("seu chute foi maior que o numero secreto\n");
        }
        else{
            printf("seu chute foi menor que o numero secreto\n");
        }

        tentativas++; 

        pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
     }

printf("fim de jogo\n");

if (acertou){
    printf("voce acertou em %d tentativas\n",tentativas);
    printf("total de pontos: %.2f\n\n", pontos);
}
else{
    printf("voce perdeu\n");
}

return 0;
 }