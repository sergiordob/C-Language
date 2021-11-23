#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a[2][2] = { {1,2}, {2,3} };
    int b[2][2] = { {4,5}, {6,7} };

    int *ptr1 = NULL;
    int *ptr2 = NULL;

    ptr1 = &a[0][0];
    ptr2 = &b[0][0];

    printf("Sum:");

    for (int i=0; i < 4; i++)
    {
        printf(" %d", *(ptr1+i) + *(ptr2+i) );
    }

    return 0;
}