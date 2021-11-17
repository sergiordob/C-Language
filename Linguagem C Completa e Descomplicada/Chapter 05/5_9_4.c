#include <stdio.h>
#include <stdlib.h>

    int main () {

    int cont;

    cont = 1;

        while (cont <= 15){
            if (cont % 3  == 0)
                printf("%d", cont);
            else
                printf(" ");
            cont++;
        }

    printf("\n");
    system("pause");

    }
