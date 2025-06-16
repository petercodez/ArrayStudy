#include <stdio.h>

int main(){

    int userMatrix[3][3], pares = 0, impares = 0, valorAtual;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &userMatrix[i][j]);
        }
    }

    printf("\nSua Matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", userMatrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            valorAtual = userMatrix[i][j]; // i j representam uma posição que contém UM ÚNICO VALOR
            if ((valorAtual) % 2 == 0)
            {
                pares++;
            } else {
                impares++;
            } 
        }
    }
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d", impares);
    return 0;
}