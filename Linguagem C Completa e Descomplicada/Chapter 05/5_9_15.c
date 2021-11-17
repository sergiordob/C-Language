#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int numero, maior, menor;

    numero = menor = maior = 0;

    while (numero != -1)
    {
        printf("Digite um numero (-1 para sair): ");
        scanf("%d", &numero);

        if (numero > maior)
    {
        maior = numero;
    }
    else if (numero < menor)
    {
        menor = numero;
    }
}
printf("\nMaior = %d  Menor = %d\n", maior, menor);
    system("pause");
}
