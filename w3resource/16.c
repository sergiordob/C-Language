#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int v[5] = {1,2,3,4,5};

    int i;
    int sum =0;

    for (i=0; i < 5; i++)
    {
        sum += *(v+i);
    }

    printf("Sum = %d", sum);

    return 0;
}