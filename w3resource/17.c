#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int v[5] = {1,2,3,4,5};
    int i;

    for (i=4; i >= 0; i--)
    {
        printf("v[%d] = %d\n", i, *(v+i));
    }

    return 0;
}