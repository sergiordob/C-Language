#include <stdio.h>
#include <stdlib.h>

    int main () {

        int numero, cont;

        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);

        cont = 0;

        while ( numero >= cont ){
            printf("%d ", numero);
            numero--;
        }

        system("pause");

    }
