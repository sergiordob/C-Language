#include <stdio.h>
#include <stdli.h>

int v[10] = {0};

void f01(int *);
void f02(int *);
void f03(int *);

int main()
{
	f01(v);
	f02(v);
	f03(v);
	
	return 0;
}

void f01(int *v)
{
	int i;
	
	for(i=0; i < 10; i++)
	{
		printf("v[%d] = ", i);
		scanf("%d", &v[i]);
	}	
}

void f02(int *v)
{
	int i;
	
	for(i=0; i < 10; i++)
	{
		printf("v[%d] = ", i);
		scanf("%d", &v[i]);
	}	
}
