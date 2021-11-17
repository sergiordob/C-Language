#include <stdio.h>
#include <stdlib.h>

    int main () {

        int cont, termos, cont2, aux1; 

        printf("Digite um numero inteiro maior ou igual a zero: ");
        scanf("%d", &termos); /*quantidade de termos da sequencia*/

        cont = 0;
        cont2 = 1;
        
        while (cont < termos)
        {
            if (cont < 2)
                printf("%d ", cont);
                else
                {
                    while (cont2 < termos)
                    {
                        printf("%d ", cont2+cont);
                        cont2++;
                    }
                }
        cont++;
        }
    return 0;
    }