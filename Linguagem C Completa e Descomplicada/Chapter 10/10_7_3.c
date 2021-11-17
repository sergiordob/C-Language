#include <stdio.h>
#include <stdlib.h>

int main()
{
	float v[5] = {1.1, 2.1, 3.5, 4.4, 5.6};
	int i;
	float *p = v;

	for (i=0; i< 5; i++)
	{
		printf("v[i] = %.2f  hex = %p\n", v[i], (p+i));
	}

	return 0;
}