#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int v[2][2] = { {1,2}, {2,3} };
    int *ptr = &v[0][0];
    
    for (int i=0; i < 4; i++)
    {
        printf("%d ", *(ptr+i));
    }
    return 0;
}