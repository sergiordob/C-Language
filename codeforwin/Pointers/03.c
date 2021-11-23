#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int v[2] = {1,2};
    int sum = 0;

    printf("Sum = %d\n\n", (*v) + *(v+1));

    return 0;
}