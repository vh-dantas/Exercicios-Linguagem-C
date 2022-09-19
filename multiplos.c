#include <stdio.h>
#include <stdlib.h>
//Programa que lê e mostra os 10 primeiros múltiplos de um número.

int main(void){
    int num;
    printf("Digite um numero para que se calcule seus 10 primeiros multiplos: ");
    scanf("%d", &num);

    for(int i = 1; i < 11; i++){
        printf("\n%d x %d = %d", num, i, num*i);
    }

    return 0;
}