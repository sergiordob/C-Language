#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int v[5] = {0};
	int *p1 = v;
	int i    = 0;



	for (i=0; i < 5; i++)
	{
		printf("Enter v[%d] = ", i);
		scanf("%d", &v[i]);
	}

	for (i=0; i < 5; i++)
	{
		printf("v[%d] = %d\n", i, *(p1+i));
	}

	for (i=0; i < 5; i++)
	{
		printf("2*v[%d] = %d\n", i, (*(p1+i))*2);
	}

	return 0;
}