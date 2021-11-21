#include <stdio.h>
#include <stdlib.h>

f1(int *, int *);

int main ()
{
    int n =5, j =10;

    printf("%d", f1(&n, &j) );

    return 0;
}

int f1 (int *first_number, int *second_number)
{
    if (*first_number > *second_number)
    {
        return *first_number;
    }
    else
    {
        return *second_number;
    }
}