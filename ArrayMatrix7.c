#include <stdio.h>

// Contagem de Números Acima e Abaixo da Média

int main(){

    int userMatrix[4][4], media = 0, somaElementos = 0, acimaMedia = 0, abaixoMedia = 0, valorAtual;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &userMatrix[i][j]);
        }
    }

    printf("\nSua Matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", userMatrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            somaElementos += userMatrix[i][j];
        }
    } 
    
    media  = somaElementos / 16;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            valorAtual = userMatrix[i][j];

            if (valorAtual > media)
            {
                acimaMedia++;
            } else {
                abaixoMedia++;
            }
        }
    }
    printf("\nSoma dos elementos: %d", somaElementos);
    printf("\nMedia dos elementos: %d", media);
    printf("\nElementos acima da media: %d", acimaMedia);
    printf("\nElementos abaixo da media: %d", abaixoMedia);
    return 0;
}