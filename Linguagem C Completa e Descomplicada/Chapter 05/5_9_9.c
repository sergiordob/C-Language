#include <stdio.h>

    int main (){

        int cont, numero1, numero2, maior, menor, temp;

        printf("Digite um numero inteiro: ");
        scanf("%d", &numero1 );

        maior = numero1; /*O segredo dessa questão está em atribuir maior e menor para numero1*/
        cont = 0;
        menor = numero1;

            while ( cont < 3 )
            {
                printf("Digite um numero inteiro: ");
                scanf("%d", &numero2);

                    if (numero2 > maior)
                        maior = numero2;
                    
                    if (numero2 < menor)
                        menor = numero2;
                       
                cont++;
            }

        printf("\nMaior = %d   Menor = %d\n", maior, menor);

    }
                    
                    

            