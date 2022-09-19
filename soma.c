#include <stdio.h>
#include <stdlib.h>
//Programa que soma os números digitados até que se digite o número 0, finalizando o cálculo e mostrando o resultado.

int main(void){
    int num, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    while(num != 0){
        soma += num;
        printf("Digite um numero: ");
        scanf("%d", &num);
    }

    printf("A soma dos numeros digitados eh: %d", soma);

    return 0;
}