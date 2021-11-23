#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char a[20] = "Joao";
    char b[20] = "Paulo";
    int cont = 0;

    for (int i=0; i < 5; i++)
    {
        if ( *(a+i) != *(b+i) )
        {
           cont++;
        }
    }

    if (cont > 0)
    {
        printf("Strings not match");
    }

    return 0;
}