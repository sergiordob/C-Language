#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int v[5] = {0};

void function01(int *);
void function02(int *);

int main ()
{
  function01(v);
  function02(v);
}

void function01(int *v)
{
  int i=0;

  do
  {
    printf("Enter v[%d] = ", i);
    scanf("%d", &v[i]);
    i++;
  } while(i<6);

}

void function02(int *v)
{
  float soma=0.0;
  int i=0;

  do
  {
    soma += v[i];
    i++;
  } while(i<6);

  float media = soma/6;
  printf("\nSoma = %.3f", soma);
  printf("\nMedia = %.3f", media);
}
