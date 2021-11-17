#include <stdio.h>

    int main (){
        int somador, cont, numero;

        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        cont = numero-1;
        somador = 0;

            while (cont > 0)
            {
                if (numero % cont == 0)
                {
                   somador = somador + cont; 
                }
            cont--;
            }

    printf("\nSoma de todos os divisores: %d\n", somador);
    }