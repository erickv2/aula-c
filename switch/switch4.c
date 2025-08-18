#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int opcao;
    int numerosecreto, palpite, regras;

    printf("Menu Principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numerosecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);

        if (numerosecreto == palpite)
        {
            printf("Você acertou!");
            printf("Número secreto: %d\n", numerosecreto);
        }
        else
        {
            printf("Você errou!\n");
            printf("Número secreto: %d\n", numerosecreto);
        }

        break;
    case 2:
        printf("Digite a opção relacionada ás regras do jogo.\n");
        scanf("%d", &regras);

        switch (regras)
        {
        case 1:
            printf("Regra 1");
            break;
        case 2:
            printf("Regra 2");
            break;
        default:
            break;
        }
        break;
    case 3:
        printf("Saindo do jogo");
        break;
    default:
        printf("Opção inválida");
        break;
    }
}