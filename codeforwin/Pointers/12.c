#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char s[20] = "Samsung";
    int cont=0;

    for (int i = 0; *(s+i) != '\0'; i++)
    {
        cont++;
    }

    printf("Chars = %d", cont);

    return 0;
}