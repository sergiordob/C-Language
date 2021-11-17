#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char v[50] = { };

	int i, cont=0;

	printf("String: ");
	gets(v);

	for (i=0; i != '\0'; i++)
	{
		cont++;
	}

	for (i=0; i < cont; i++)
	{
		printf("%c", v[i]);
	}

	return 0;
}