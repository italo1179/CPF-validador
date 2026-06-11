#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cpf[12];
    int vet2[11];
    int n = 10;
    int r = 0;
    int x = 0;
    int div = 11;
    int d = 0;
    int i;
    char z;

    printf("\nEscreva o seu CPF:");
    scanf("%11s", &cpf);
    for (i = 0; i < 11; i++)
    { // Transformando o Char em Int
        vet2[i] = cpf[i] - '0';
    }

    for (i = 0; i < 9; i++)
    { // Primeiro Calculo do CPF
        r = vet2[i] * n;
        n--;
        x += r;
    }

    d = (x % 11);

    if (d >= 2)
    {
        d = 11 - d;
    }
    else if (d < 2)
    {
        d = 0;
    }

    if (vet2[9] == d)
    { // Primeiro verificador
        n = 11;
        x = 0;
        for (i = 0; i < 10; i++)
        {
            // Segundo Calculo do CPF
            r = vet2[i] * n;
            n--;
            x += r;
            // printf("\n%d %d",n,x);
        }

        d = (x % 11); // Segundo caculo de verificação

        if (d >= 2)
        {
            d = 11 - d;
        }
        else if (d < 2)
        {
            d = 0;
        }

        if (vet2[10] == d)
        { // Resultado da segunda
            printf("\nSeu CPF esta valido!");
        }
        else
        {
            printf("\nSeu CPF não esta valido!");
        }
    }
    else
    {
        printf("\nSeu CPF não esta valido!");
    }
}