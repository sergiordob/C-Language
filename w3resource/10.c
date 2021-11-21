#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char v[10] = "Ponteiro";
 
    int i;
    int cont=0;


    for (i=0; *(v+i) != '\0'; i++)
    {
        cont++;
    }

    printf("Cont = %d", cont);
}