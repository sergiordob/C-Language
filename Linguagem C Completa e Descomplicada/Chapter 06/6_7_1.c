#include <stdio.h>
#include <stdlib.h>

void funcao01();

int main ()
{
	funcao01();

	system("pause");

	return 0;
}


void funcao01()
{
	int i=0;
	int v[6]={0};

	for (i=0; i < 6; i++)
	{
		printf("Vetor[%d] = ", i);
		scanf("%d", &v[i]);
	}
	printf("\n");
	for (i=0; i < 6; i++)
	{
		printf("Vetor[%d] = %d\n", i, v[i]);
	}

}
