#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int v[4] = {1,2,3,4,};
    int cont=0;
    
    for (int i=0; i < 4; i++)
    {
        if ( *(v+i) == 15) //number to search
        {
            cont = 1;
            
        }
    }

    if (cont == 1)
    {
        printf("Got it!");
    }
    else
    {
        printf("Number is not here");
    }
    
    return 0;
}