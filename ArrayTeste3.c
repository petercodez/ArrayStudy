#include <stdio.h>

int main(){

    int userArray[6], maiorValor = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &userArray[i]);

        if (userArray[i] > maiorValor)
        {
            maiorValor = userArray[i];
        }
    }
    printf("Maior elemento do Array: %d", maiorValor);
    
    return 0;
}