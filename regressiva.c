#include <stdio.h>
#include <stdlib.h>

//Programa de contagem regressiva.

int main(void){
    for(int i = 10; i > 0; i--){
        printf("%d\n", i);
        sleep(1);
    }
    printf("FIM!");
    return 0;
}