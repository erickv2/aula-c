#include <stdio.h>

int main(){

    //declaring variables

    char productA[30] = "Produto A"; 
    char productB[30] = "Produto B";

    unsigned int stockA = 1000;
    unsigned int stockB = 2000;

    float valueA = 10.50;
    float valueB = 20.40;

    unsigned int stockMinA = 500;
    unsigned int stockMinB = 2500;
    
    double totalValueA;
    double totalValueB;

    int resultA, resultB;   

    //show information

    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f \n", productA, stockA, valueA);
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f \n", productB, stockB, valueB);

    //comparison between minimum stock

    resultA = stockA > stockMinA;
    resultB = stockB > stockMinB;

    printf("O produto %s tem estoque mínimo? %d \n", productA, resultA);
    printf("O produto %s tem estoque mínimo? %d \n", productB, resultB); 

    //comparison between total value

    printf("o valor total de A (R$ %.2f) é maior que o valor total de B? (R$ %.2f): %d \n", stockA * valueA, stockB * valueB, (stockA * valueA) > (stockB * valueB));
}