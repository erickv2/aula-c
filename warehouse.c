#include <stdio.h>

int main(){
    float temperature, humidity;
    unsigned int stock, stockMin = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperature);

    printf("Entre com a humidade: \n");
    scanf("%f", &humidity);

    printf("Entre com o estoque: \n");
    scanf("%u", &stock);

    if (temperature > 30)
    {
        printf("Temperatura está alta\n");
    } else {
        printf("Temperatura está dentro dos parâmetros\n");
    }

    if(humidity > 50) {
        printf("Umidade elevada\n");
    } else {
        printf("Umidade está dentro dos parâmetros\n");
    }
    
    if(stock < stockMin) {
        printf("Estoque abaixo do mínimo");
    } else {
        printf("Estoque normal");
    }
}