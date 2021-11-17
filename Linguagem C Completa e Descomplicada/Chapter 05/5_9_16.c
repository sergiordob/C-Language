#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int n, cont1;
    float somador;

    somador = 0.0;
    cont1 = 1;

    printf("Digite a ordem de Hn: ");
    scanf("%d", &n);

    while (cont1 <= n)
    {
        somador = somador + 1.0/( (float) cont1 );
        cont1++;
    }

    printf("\nValor de somador = %.2f\n", somador);

    system("pause");
}
