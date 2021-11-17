#include <stdio.h>
#include <stdlib.h>

int main ()
{
	double i = 0.0000;

	printf("Enter a real number: ");
	scanf("%f", &i);

	printf("Number = %E", i);

	return 0;
}