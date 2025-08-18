#include <stdio.h>

int main()
{
    int numJogador, numPc, resultado;
    char tipoComparacao;

    // gerar numero aleatório

    srand(time(0));

    numPc = rand() % 100 + 1; // numero entre 1 e 100

    printf("Bem-vindo ao jogo maior, menor ou igual!\n");
    printf("Você deve escolher um número e o tipo de comparação:\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &numJogador);

    // printf("O número do computador é: %d\n", numPc);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior\n");
        resultado = numJogador > numPc ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor\n");
        resultado = numJogador < numPc ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção igual\n");
        resultado = numJogador == numPc ? 1 : 0;
        break;
    default:
        printf("Opção de jogo inválida\n");
        break;
    }

    printf("O número do computador é: %d e o do jogador é: %d\n", numPc, numJogador);

    if (resultado == 1)
    {
        printf("Você venceu\n");
    }
    else
    {
        printf("Você perdeu\n");
    }
}