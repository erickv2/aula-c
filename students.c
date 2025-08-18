#include <stdio.h>

int main()
{
    int opcao;
    float nota1, nota2, media;

    printf("Menu de gerenciamento de estudantes\n");
    printf("1. Calcular média\n");
    printf("2. Determinar status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular média\n");
        printf("Digite a primeira nota\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota\n");
        scanf("%f", &nota2);

        // testa a condição se anota é >= 0 e <= 10

        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10))
        {
            media = (nota1 + nota2) / 2;
            printf("A média é %.2f\n", media);
        } else {
            printf("Valores inválidos");
        }
        break;
    case 2:
        printf("Determinar status\n");
        printf("Entrar com a média\n");
        scanf("%f", &media);
        
        // media >= 5 ? printf("Aprovado") : printf("Reprovado");

        if (media >= 7)
        {
            printf("Aprovado");
        } else if (media >= 5) {
            printf("Recuperação");
        } else {
            printf("Reproavdo");
        }
        
        break;
    case 3:
        printf("Sair");
        break;
    default:
        printf("Opção inválida");
        break;
    }
}