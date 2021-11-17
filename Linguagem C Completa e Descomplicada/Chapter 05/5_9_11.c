#include <stdio.h>

    int main () {

        int numero, cont;

        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);

        cont = numero;

            while (cont > 0)
            {
                if (numero % cont == 0)
                    printf("Divisor = %d\n", cont);

            cont--;
            }
   
    }