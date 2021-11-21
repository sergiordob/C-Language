#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    //int *ptr=NULL;
    int i, vogal = 0, consoante = 0;
    char string[50] = " ";
   

    printf("String: ");
    gets(string);

    for (i=0; *(string+i) != '\0'; i++)
    {
        if ( (*(string+i) >= 65 && *(string+i) <= 90 ) || (*(string+i) >= 97 && *(string+i) <= 122 ) )
        {
            if ( *(string+i) == 65 || *(string+i) == 69 || *(string+i) == 73 || *(string+i) == 79 || *(string+i) == 85 || *(string+i) == 97 || *(string+i) == 101 || *(string+i) == 105 || *(string+i) == 111 || *(string+i) == 117 )
            {
                vogal++;
            }
            else
            {
                consoante++;
            }
        }
    }

    printf("Vowel = %d Consoants = %d", vogal, consoante);

    return 0;
}