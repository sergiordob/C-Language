#include <stdio.h>
#include <stdlib.h>

    int main (){

        int numero, contador, soma;

        contador = 0;
        soma = 0;

            while (contador < 10){
                printf("Digite um numero: ");
                scanf("%d", &numero);
                soma = soma + numero;
                contador++;
            }

            printf("\nMedia dos valores: %d\n", soma/10);

        system("pause");
        
    }