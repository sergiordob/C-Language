#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	int *p1, *p2;

	printf("Enter the first number: ");
	scanf("%d", &i);
	printf("Enter the second number: ");
	scanf("%d", &j);

	p1 = &i;
	p2 = &j;

	if (p1 > p2)
	{
		printf("Variable i has the higher adress number: (hex = %p) and (integer = %d)", p1, p1);
	}
	else
	{
		printf("Variable j has the higher adress number: (hex = %p) and (integer = %d)", p2, p2);
	}

	return 0;
}