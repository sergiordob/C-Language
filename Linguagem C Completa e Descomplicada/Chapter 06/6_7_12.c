#include <stdio.h>
#include <stdlib.h>

int v[10] = {0};
int z[10] = {0};

void f01();
void f02(int *);

int main()
{
	f01();
	f02(v);

	return 0;
}

void f01()
{
	int i=0;
	
	do
	{
		printf("v[%d] = ", i);
		scanf("%d", &v[i]);
		z[i] = v[i];
		i++;
	}
	while (i < 10);
}

void f02(int *array)
{
	int i, j;
	int cont =0;

	printf("\n\n");

	for (i=0; i < 10; i++)
	{
		for (j=i+1; j < 10; j++)
		{

			printf("v[%d] = %d   z[%d] = %d\n", i, v[i], j, z[j]);
			/*if (v[i] == z[j])
			{
				printf("\n\nv[%d] = %d\n\n",i, v[i]);		
			}*/
			
		}
		printf("\n");
	}
}