#include <stdio.h>

int main(){

    int i, soma = 0;
    int userArray[4];
    

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &userArray[i]);
        soma += userArray[i];
    }
    printf("Soma dos elementos: %d", soma);



    return 0;
}