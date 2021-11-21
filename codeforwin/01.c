#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i=10;
    int *ptr=NULL;

    ptr = &i;

    printf("Adress of i = %p\n", i);
    printf("Value of i = %d\n", i);

    printf("Value of ptr = %d\n", ptr);
    printf("Adress of ptr = %p\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

    return 0;
}