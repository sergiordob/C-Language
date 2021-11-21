#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int m, o, n;
	int *ptr = &m;

	printf("Enter a integer value for m: ");
	scanf("%d", &m);

	printf("Value of m = %d\n", m);
	printf("*ptr stores  the value of m = %d\n", *ptr);
	printf("&m is the adress of m = %p\n", &m);
	printf("ptr is assigned with the adress of of m = %p\n", ptr);
	printf("ptr has an adress = %p\n", &ptr);

	return 0;

}