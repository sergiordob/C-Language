#include <stdio.h>
#include <stdlib.h>

int f1(void );

int main ()
{
    f1();

    return 0;
}

int f1()
{
    int i=0;
    int v[10] = {0};

    for (i=0; i < 10; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    return(*v);
}