#include <stdio.h>

// Leitura e Soma dos Elementos de uma Matriz

#define rows 2
#define columns 2

int main(){

    int userMatrix[rows][columns];
    int i, j, sum = 0;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &userMatrix[i][j]);
            sum += userMatrix[i][j];
        }
    }
    printf("\nMatriz lida:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", userMatrix[i][j]);
        }
        printf("\n");
    }
    printf("Soma = %d", sum);
    return 0;
}