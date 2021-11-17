#include <stdio.h>
#include <stdlib.h>

void f1(int *, int);

int main ()
{
	int valor;
	int v[5] = {0};

	printf("Enter a value: ");
	scanf("%d", &valor);

	f1(v, valor);
}

void f1(int *vetor, int valor)
{
	*(vetor+0) = valor; printf("%d ", *(vetor+0));
	*(vetor+1) = valor; printf("%d ", *(vetor+1));
	*(vetor+2) = valor; printf("%d ", *(vetor+2));
	*(vetor+3) = valor; printf("%d ", *(vetor+3));
	*(vetor+4) = valor; printf("%d ", *(vetor+4));
}