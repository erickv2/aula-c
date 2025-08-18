#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int escolhaJogador, escolhaPc;
    srand(time(0));

    printf("JokenPo\n");
    printf("Escolha uma opção: \n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");

    scanf("%d", &escolhaJogador);

    escolhaPc = rand() % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    default:
        printf("Opção inválida");
        break;
    }

    switch (escolhaPc)
    {
    case 1:
        printf("Bot: Pedra\n");
        break;
    case 2:
        printf("Bot: Papel\n");
    case 3:
        printf("Bot: Tesoura\n");
        break;
    }

    if(escolhaPc == escolhaJogador) {
        printf("Empate");
    } else if ((escolhaJogador == 1) && (escolhaPc == 3) || (escolhaJogador == 2) && (escolhaPc == 1) || (escolhaJogador == 3) && (escolhaPc = 2)) {
        printf("Você ganhou");
    } else {
        printf("Você perdeu");
    }

    return 0;
}