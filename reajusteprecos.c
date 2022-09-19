#include <stdio.h>
#include <stdlib.h>

int main(void){
    float preco;

    printf("-----------Reajuste de Precos-----------");
    printf("\nPRECO ANTIGO       PERCENTUAL DE AUMENTO\n"
           "Ate R$50,00                    5%% \n"
    "Entre R$50,00 e R$100,00       10%% \n"
           "Acima de R$100,00              15%%\n"   
    );

    printf("\nDigite o preco antigo para que seja reajustado: R$");
    scanf("%f", &preco);
    if (preco<=50){
        printf("\nO novo valor deste produto sera de R$%.2f", (preco/20)+preco);
        printf("\nO valor foi alterado com base na tabela de reajustes.");

    }
    if (preco>50 && preco<=100){
        printf("\nO novo valor deste produto sera de R$%.2f", (preco/10)+preco);
        printf("\nO valor foi alterado com base na tabela de reajustes.");

    }
    if (preco>100){
        printf("\nO novo valor deste produto sera de R$%.2f", (preco/20)*3+preco);
        printf("\nO valor foi alterado com base na tabela de reajustes.");

    }

    return 0;
}
