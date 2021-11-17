#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char a, b, c;

	printf("Enter three charactere: ");
	scanf("%c%c%c", &a, &b, &c);
	printf("\nDigits: %c %c %c", a, b, c);

	return 0;
}