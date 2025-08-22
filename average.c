#include <stdio.h>

typedef struct average
{
    float nota1, nota2, nota3;
} Average;

Average getAverage()
{
    Average a;
    
    printf("\n Média dos alunos \n");

    printf("Digite a primeira nota: \n");
    scanf("%f", &a.nota1);  

    printf("Digite a segunda nota: \n");
    scanf("%f", &a.nota2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &a.nota3);

    return a;
}

float calculateAverage(Average a) {
    return (a.nota1 + a.nota2 + a.nota3) / 3;
}

void showAverage(float avg) {
    printf("A média do aluno é: %.2f\n", avg);
}

int main() {
    Average aluno = getAverage();
    float average = calculateAverage(aluno);
    showAverage(average);
    return 0;
}