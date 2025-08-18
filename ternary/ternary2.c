#include <stdio.h>

int main()
{
    int temperatura = 32;
    int resultado;

    resultado = temperatura > 30 ? 1 : 0;

    if (resultado == 0)
    {
        printf("Está frio");
    }
    else
    {
        printf("Está calor");
    }
}