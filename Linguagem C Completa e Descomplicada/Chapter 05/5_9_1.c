#include <stdio.h>
#include <stdlib.h>

    int main () {

        int inteiro, cont;

        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &inteiro);

        cont = 0;

        while (cont <= inteiro){
            printf("%d ", cont);
            cont++;
        }

        printf("\n");

        system("pause");
        return 0;

        }
