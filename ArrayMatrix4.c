#include <stdio.h>

int main(){

    int userMatrix[3][2];
    int transposedMatrix[2][3];

    printf("Monte sua matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &userMatrix[i][j]);
        }
    }

    printf("\nSua matriz montada:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", userMatrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSua matriz transposta:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            transposedMatrix[j][i] = userMatrix[i][j];
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", transposedMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}