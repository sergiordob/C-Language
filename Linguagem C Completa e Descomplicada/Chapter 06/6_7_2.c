#include <stdio.h>
#include <stdlib.h>

int v[6] = {0};

void function01(int *);
void function02(int *);

int main ()
{
  function01(v);
  function02(v);
}

void function01(int *v)
{
  int i;

  for (i=0; i < 6; i++)
  {
    printf("Enter v[%d] = ", i);
    scanf("%d", &v[i]);
  }
}

void function02(int *v)
{
  int i;

  for (i=5; i >= 0; i--)
  {
    printf("v[%d] = %d\n", i, v[i]);
  }
}
