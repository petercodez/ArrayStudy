#include <stdio.h>

// Soma das Diagonais de uma Matriz Quadrada

int main(){

    int userMatrix[3][3], somaPrincipal = 0, somaSecundaria = 0, i;

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
    
    for (int i = 0; i < 3; i++)
    {
        somaPrincipal += userMatrix[i][i];
    }
    printf("\nSoma da Diagonal Principal: %d\n", somaPrincipal);

    for (int i = 0; i < 3; i++)
    {
        somaSecundaria += userMatrix[i][3-1-i];
    }
    printf("Soma da Diagonal Secundaria: %d\n", somaSecundaria);
    return 0;
}