#include <stdio.h>
#include <stdlib.h>

    int main () {

        int cont=0, somador=0;

            while (cont <= 50){
                if (cont % 2 == 0){
                    printf("Numero par: %d\n", cont);
                    somador = somador + cont;
                }
            cont++;
            }
    printf("\nSoma dos 50 primeiros numeros pares: %d\n\n", somador);

    system("pause");

    }
