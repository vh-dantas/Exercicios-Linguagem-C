#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    int numEsc;

    printf("Escolha a opcao:\n1 - Soma de dois numeros\n2 - Diferenca entre 2 numeros\n3 - Produto entre 2 numeros\n4 - Divisao entre 2 numeros\n");
    scanf("%d", &numEsc);
    if(numEsc == 1){
        float num1;
        float num2;
        printf("SOMA ENTRE 2 NUMEROS\n");
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        printf("A soma entre %.2f e %.2f eh %.2f", num1, num2, num1+num2);        
    }
    else if(numEsc == 2){
        float num1;
        float num2;
        printf("DIFERENCA ENTRE 2 NUMEROS\n");
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        printf("A diferenca entre %.2f e %.2f eh %.2f", num1, num2, num1-num2);
    }
    else if(numEsc == 3){
        int num1;
        int num2;
        printf("PRODUTO ENTRE 2 NUMEROS\n");
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        printf("O produto entre %d e %d eh %d", num1, num2, num1*num2);
    }
    else if(numEsc == 4){
        float num1;
        float num2;
        printf("DIVISAO ENTRE 2 NUMEROS\n");
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        printf("A divisao entre %.0f e %.0f eh %.2f", num1, num2, num1/num2);
    }
    else{
        printf("O numero digitado e invalido");
    }


    return 0;
}