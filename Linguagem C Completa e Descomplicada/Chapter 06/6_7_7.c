#include <stdio.h>
#include <stdlib.h>

int v[10] = {0};

void f01(int *);
void f02(int *);

int main ()
{
  f01(v);
  f02(v);

  return 0;
}

void f01(int *v)
{
  int i;

  for (i=0; i < 10; i++)
  {
    printf("v[%d] = ", i);
    scanf("%d", &v[i]);
  }
}

void f02(int *v)
{
	int i;
	int maior = v[0];

  for (i=0; i < 10; i++)
  {
    if (v[i] > maior)
    {
    	maior = v[i];
	}
  }
  
  printf("Maior: %d", maior);
  
}
