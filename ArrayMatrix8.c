#include <stdio.h>

// Verificação de Matriz Identidade

int main(){

    int userMatrix[3][3], diagIdentidade, i, j;

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
        for (int j = 0; j < 3; j++)
        {
            if (userMatrix[i][i] != 1)
            {
                printf("Nao identidade");
                break;
            }
            
        }
        
    }
    

    return 0;
}