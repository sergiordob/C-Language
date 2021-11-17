#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m=0, n=0;
	int *ptr=NULL;

	printf("Enter m: ");
	scanf("%d", &m);

	ptr = &m;

	printf("adress of m: %p\n", &m);
	printf("ptr is pointing to the address of m: %p\n", ptr);
	printf("*ptr stores the value of m: %d\n", *ptr);
	printf("adress of ptr: %p\n\n", &ptr);

	printf("Enter n: ");
	scanf("%d", &n);

	ptr = &n;

	printf("adress of n: %p\n", &n);
	printf("ptr is pointing to the address of n: %p\n", ptr);
	printf("*ptr stores the value of n: %d\n", *ptr);	
	printf("adress of ptr: %p\n\n", &ptr);


	return 0;
}