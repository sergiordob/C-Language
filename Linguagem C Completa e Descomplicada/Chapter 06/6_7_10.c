#include <stdio.h>
#include <stdlib.h>

void f01();


int main()
{
	f01();

	return 0;
}

void f01(void )
{
	int i;
	int v[100] = {0};

	for (i=0; i < 101; i++)
	{
		if (i % 7 != 0)
		{
			v[i] = i;
			printf("%d ", v[i]);
		}
	}
}