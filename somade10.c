#include <stdio.h>
#include <stdlib.h>
//Programa que lê 10 números e mostra a soma de todos eles.

int main(void){
    int num, soma = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite um numero: \n");
        scanf("%d", &num);
        soma = soma + num;
    }
    
    printf("A soma desses valores eh %d", soma);

    return 0;
}