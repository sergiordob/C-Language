#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char a[20] = "Samsung";
    char b[20] = "Apple";
    int cont1 = 0;
    int cont2 = 0;

    for (int i =0; *(a+i) != '\0'; i++)
    {
        cont1++;
    }

    for (int i =0; *(b+i) != '\0'; i++)
    {
        cont2++;
    }

    for (int i=0; i < cont2; i++)
    {
        *(a+cont1) = *(b+i);
        cont1++;
    }

    printf("%s", a);

    return 0;

}