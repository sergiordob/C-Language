#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char v[10] = "Antenas";
    int i;
    int cont = 0;

    for (i=0; v[i] != '\0'; i++)
    {
        cont++;
    }

    for (i=cont; i >= 0; i--)
    {
        printf("%c", *(v+i));
    }

    return 0;
}