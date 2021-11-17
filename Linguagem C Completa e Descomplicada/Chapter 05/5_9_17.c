#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont1, cont2, linha, cont3;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &linha);

    cont1 = 1;
    cont3 = 0;

    while (cont1 <= linha)
    {
        cont2 = 1;
        while (cont2 <= cont1)
        {
            cont3++;
            printf("%d ", cont3);
            cont2++;
        }
        printf("\n");
        cont1++;
    }


    system("pause");
}
