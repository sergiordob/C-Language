#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float i=0, j=0;

	printf("Enter two float numbers: ");
	scanf("%f%f", &i, &j);
	printf("Second value: %.2f   First value: %.3f", j, i);


	return 0;
}