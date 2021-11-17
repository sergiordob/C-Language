#include <stdio.h>

int main(){

    float vetor[5], aux;
    int i, j;

    
    for(i = 0; i < 5; i++)
    {
        printf("v[%d] = ", i);
        scanf("%f", &vetor[i]);
    }
    
    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(vetor[i] > vetor[j])
            {
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }

    }

    for(i = 0; i < 5; i++)
    {
        printf("%.2f", vetor[i]);
        printf("\n");
    }
    
    return 0;
}