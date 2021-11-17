#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//n=10


int main()
{
	int i=0;
	int n=10;
	float v[10] = {1,2,3,4,5,6,7,8,9,10};

	float factor = 1/(n-1);
	float media = 5.5;
	float sum = 0.0;
	float under_root=0.0;
	float d = 0.0;

	for (i=0; i < 10; i++)
	{
		sum += (v[i] - media);
	}

	under_root = factor*sum;

	d = sqrt(under_root);

	printf("Value = %.3f", sum);

}