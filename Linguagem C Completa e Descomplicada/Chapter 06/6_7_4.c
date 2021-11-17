#include <stdio.h>
#include <stdlib.h>

int v[6] =  {1, 0, 5, -2, -5, 7};


void function02(int *);
void function03(int *);
void function04(int *);

int main()
{

  function02(v);
  function03(v);
  function04(v);

  return 0;
}



void function02(int *v)
{
  int soma = v[0]+v[1]+v[5];

  printf("Soma = %d\n", soma);
}

void function03(int *v)
{
  v[3] = 100;
}

void function04(int *v)
{
  int i;

  for (i=0; i < 6; i++)
  {
    printf("%d ", v[i]);
  }
}
