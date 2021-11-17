#include <stdio.h>
#include <stdlib.h>

    int main () {

        int numero, cont, somador3, somador5;

        cont = somador3 = somador5 = 0;

            while (cont < 1000){

                if (cont % 3 == 0)
                    somador3 = somador3 + cont;

                if (cont % 5 == 0)
                    somador5 = somador5 + cont;

            cont++;

            }

        printf("\nSoma de todos os numeros abaixo de 1k que sao multiplos de 3: %d", somador3);
        printf("\nSoma de todos os numero abaixo de 1k que sao multiplos de 5: %d\n\n", somador5);

        system("pause");
        return 0;

    }