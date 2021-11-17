#include <stdio.h>
#include <stdlib.h>

    int main (){

        int somador, numero, contador;

        somador = 0;
        contador = 0;

            while (contador < 10){
                printf("Digite um numero inteiro: ");
                scanf("%d", &numero);
                somador = somador + numero;
                contador++;
            }

            printf("\nSoma de todos os numeros digitados: %d\n", somador);

        system("pause");
    }