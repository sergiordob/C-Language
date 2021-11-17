#include <stdio.h>
#include <stdlib.h>

int v[5] = {0};

void f1(int *);



int main ()
{
	f1(v);

	return 0;
}

void f1(int *v)
{
	int i = 0;
	int j=0;

	for (i=0; i < 5; i++)
	{
		printf("v[%d] = ", i);
		scanf("%d", &v[i]);

			for (j = 0; j < i; j++)
			{
				if (v[i] == v[j])
				{
					printf("Enter other value.");
					i--;
				}
			}
	}
}

