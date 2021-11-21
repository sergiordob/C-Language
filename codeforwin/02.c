#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i=5;
    int j=10;

    int *ptr1=NULL;
    int *ptr2 = NULL;

    ptr1 = &i;
    ptr2 = &j;

    printf("Sum = %d", (*ptr1)+(*ptr2));

    return 0;
}