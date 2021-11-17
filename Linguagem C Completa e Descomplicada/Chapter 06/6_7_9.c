#include <stdio.h>
#include <stdlib.h>

int v[10] = {0};
int k[10] = {0};

void f01(int *);
void f02(int *);
void f03(void );

int main()
{
	f01(v);
	f02(k);
	f03();

	return 0;
}

void f01(int *vetor)
{
	int i;

	for (i=0; i < 10; i++)
	{
		printf("v[%d] = ", i);
		scanf("%d", &v[i]);
	}
	printf("\n");
}

void f02(int *vetor)
{
	int i;

	for (i=0; i < 10; i++)
	{
		printf("k[%d] = ", i);
		scanf("%d", &k[i]);
	}
	printf("\n");
}

void f03(void )
{
	int i;
	int z[10] = {0};

	for (i=0; i < 10; i++)
	{
		z[i] = v[i] - k[i];
		printf("z[%d] = %d\n",i, z[i]);
	}
}