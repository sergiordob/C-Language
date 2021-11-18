#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int     *ptr1 = NULL;
    float   *ptr2 = NULL;
    char    *ptr3 = NULL;
    int         m = 300;
    float      fx = 300.600006;
    char      cht = 'z';

    //Using the & operator

    printf("Adress of m: %p\n", &m);
    printf("Adress of fx: %p\n", &fx);
    printf("Adress of cht: %p\n\n", &cht);

    ptr1 = &m;
    ptr2 = &fx;
    ptr3 = &cht;

    printf("Adress of ptr1: %p\n", &ptr1);
    printf("Adress of ptr2: %p\n", &ptr2);
    printf("Adress of ptr3: %p\n\n", &ptr3);

    printf("Adress of m: %p\n", ptr1);
    printf("Adress of fx: %p\n", ptr2);
    printf("Adress of cht: %p\n\n", ptr3);

    printf("Value of m: %d\n", *ptr1);
    printf("Value of fx: %f\n", *ptr2);
    printf("Value of cht: %c\n\n", *ptr3);

    return 0;
}