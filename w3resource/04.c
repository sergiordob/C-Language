#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ptr1 = NULL;
    int *ptr2 = NULL;

    int m = 5;
    int n = 10;

    ptr1 = &m;
    ptr2 = &n;

    printf("%d", *ptr1 + *ptr2);

    return 0;
}