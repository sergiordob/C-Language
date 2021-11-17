#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int v[5] = {1,2,3,4,5};
	int *p = v;
	int i;

	for (i=0; i < 5; i++)
	{
		if (*(p+i) % 2 == 0)
		{
			printf("%d ", *(p+i));
		}
	}

	return 0;
}