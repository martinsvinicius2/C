#include<stdio.h>
#include<stdbool.h> 

int main(){
    int numero;
    int i;

    bool primo = true; 
    printf("Digite um numero: ");   
    scanf("%d", &numero); 

    if (numero <= 1){
        printf("%d nao e primo\n", numero);
    } else {
        for (i = 2; i <= numero / i; i++) {
            if (numero % i == 0) {
                printf("%d nao e primo, e divisivel por %d\n", numero, i);
                primo = false; 
             
            }
        }
        
        if (primo) {
            printf("%d e primo\n", numero);
        }
    }

    return 0;
}
