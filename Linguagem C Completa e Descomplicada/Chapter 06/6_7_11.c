#include <stdio.h>
#include <stdlib.h>

int v[10] = {0};
int z[10] = {0};

int f01();
int f02(int *);

int main()
{
	f01();
	f02(z);

	return 0;
}

int f01()
{
	int i;

	for (i=0; i <10; i++)
	{
		printf("v[%d] = ", i);
		scanf("%d", &v[i]);
	}
	printf("\n");
}

int f02(int *array)
{
	int i = 0;
	int a = 0, b = 0;
	
	for (i=0; i < 10; i++)
	{
		a = v[i];
		b = a*a;
		z[i] = b;

		printf("z[%d] = %d\n", i, b);
	}


}