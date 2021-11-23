#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int v[4] = {1,2,3,4};
    int z[4] = {11, 12, 13, 14};
    int aux = 0;

    for (int i =0; i < 4; i++)
    {
        aux = *(v+i);
        *(v+i) = *(z+i);
        *(z+i) = aux;

        printf("v[%d] = %d   z[%d] = %d\n", i, *(v+i), i, *(z+i));
    }
    return 0;
}