#include <stdio.h>
#include <stdlib.h>

int v[8] = {0};

void f01(int *);
void f02(int *);

int main()
{
  f01(v);
  f02(v);
  return 0;
}

void f01(int *v)
{
  int i = 0;

  for(i=0; i < 8; i++)
  {
    printf("v[%d] = ", i);
    scanf("%d", &v[i]);
  }
}

void f02(int *v)
{
  int i,a, b, c, d, soma;

  printf("Digite dois valores de celulas do array: ");
  scanf("%d%d", &a, &b);

  for (i=0; i < 8; i++)
  {
    if (i == a)
    {
      c = v[i];
    }
    if (i == b)
    {
      d = v[i];
    }
  }
    soma = c+d;
    printf("Soma = %d", soma);
}
