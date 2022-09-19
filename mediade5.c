#include <stdio.h>
#include <stdlib.h>
//Programa que lê 5 números e mostra a média entre eles.

int main(void){
    float num;
    float soma = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero: \n");
        scanf("%f", &num);
        soma += num;
    }

    printf("A media entre esses numeros eh %.2f", soma/5);
    
    return 0;
}