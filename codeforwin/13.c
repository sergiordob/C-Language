#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char s[20] = "Samsung";
    char q[20] = " ";
    

    for (int i = 0; *(s+i) != '\0'; i++)
    {
        *(q+i) = *(s+i);
        printf("%c", *(q+i));
    }

    return 0;
}