#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    int z[10] = {0};

    for (int i=0; i < 10; i++)
    {
        *(z+i) = *(v+i);
        printf("z[%d] = %d\n", i, *(z+i));
    }

    return 0;
}