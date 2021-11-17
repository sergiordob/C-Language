#include <stdio.h>
#include <stdlib.h>

    int main  () {

        int numero, cont;

        cont = 0;

        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        while (cont <= numero){
            if (cont % 2 != 0)
                printf("%d", cont);
            else
                printf(" ");
            cont++;
        }

    printf("\n");
    system("pause");

        }
