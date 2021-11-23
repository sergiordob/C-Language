#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i=1;
    int j=2;
    int aux = 0;

    int *ptr = NULL;

    ptr = &i;
    aux = *ptr;
    i = j;
    j = aux;

    printf("i = %d   j = %d\n\n", i, j);

    return 0;
}