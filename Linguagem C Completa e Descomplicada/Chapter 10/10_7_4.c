#include <stdio.h>
#include <stdlib.h>
//Rever esse quesito
int main ()
{
	unsigned int v[3][3] = {0};
	unsigned int *p = &v[0][0];
	unsigned int i, j;

	for (i=0; i < 3; i++)
	{
		for (j=0; j < 3; j++)
		{
			printf("v[%d][%d] = ",i, j);
			scanf("%d", &v[i][j]);
		}
	}

	for (i =0; i < 9; i++)
	{
		printf("%p ", (p+i));

			if (i == 2 || i == 5 || i == 8)
			{
				printf("\n");

			}
	}

	return 0;
}