#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i;
    int n;
    int v[100] = {0};

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    for (i=0; i < n; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("\n");

    for (i=0; i < n; i++)
    {
        printf("v[%d] = %d\n", i, *(v+i));
    }

    printf("\n");
}