#include <stdio.h>
#include <stdlib.h>

int main(void){
    int km;
    int l;

    printf("LEITURA DE CONSUMO EM KM/L DE UM CARRO\n");
    printf("Qual foi a distancia percorrida pelo carro(em km)? ");
    scanf("%d", &km);
    printf("Quantos litros de gasolina foram gastos nesses %dkm? ", km);
    scanf("%d", &l);
    if(km/l<8){
        printf("Consumo medio de gasolina: %dkm/l.\nO seu carro faz menos de 8km/l! Venda ele!", km/l);
    }
    if(km/l>=8 && km/l <14){
        printf("Consumo medio de gasolina: %dkm/l.\nO seu carro faz entre 8 e 14km/l! Economico!", km/l);
    }
    if(km/l>14){
        printf("Consumo medio de gasolina: %dkm/l.\nO seu carro faz mais de 14km/l! Super economico!", km/l);
    }

    return 0;
}