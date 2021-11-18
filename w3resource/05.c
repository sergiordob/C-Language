#include <stdio.h>
#include <stdlib.h>

int f01(int *, int *);

int main ()
{
    int a = 5;
    int b = 25;

    int sum =  f01(&a, &b);

    printf("%d", sum);

    return 0;
}

int f01(int *x, int *y)
{
    return (*x + *y);
}