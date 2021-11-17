#include <stdio.h>
#include <stdlib.h>

int v[10] = {0};

void f01(int *);

int main()
{
  f01(v);

  return 0;
}

void f01(int *v)
{
  int i;
  int cont_par=0;

  for (i=0; i < 10; i++)
  {
    printf("v[%d] = ", i);
    scanf("%d", &v[i]);

      if (v[i] % 2 == 0)
      {
        cont_par++;
      }
  }

  printf("Quantidade de numeros pares: %d", cont_par);
}
