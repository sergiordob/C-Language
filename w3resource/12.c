#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n;
    int i;
    int fat = 1;
    int *ptr = NULL;

    printf("Number: ");
    scanf("%d", &n);

    ptr = &n;

    for (i= 0; i < n; i++)
    {
       fat *= (*ptr)-i; 
    }

    printf("factorial = %d\n", fat);

    return 0;
}