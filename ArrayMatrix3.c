#include <stdio.h>

// Somar duas matrizes

int main(){

    int matrizA[2][2];
    int matrizB[2][2];
    int matrizSoma[2][2];
    int i, j;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\nMatriz A:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\n-------------\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("\nMatriz B:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }
    printf("\n-------------\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("\nMatriz Soma:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }
    return 0;
}