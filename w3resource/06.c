#include <stdio.h>
#include <stdlib.h>

//int f01(int *, int *);

int main()
{
    int a, b;

    printf("Enter a and b (integer): ");
    scanf("%d%d", &a, &b);

    //f01(&a, &b);

    return 0;
}

/*int f01(int *x, int *y)
{
    if (*x > *y)
    {
        printf("Higher number: %d", *x);
    }
    else
    {
        printf("Lowest number: %d", *y);
    }
}*/