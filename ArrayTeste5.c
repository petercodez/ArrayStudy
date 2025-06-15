#include <stdio.h>

int main(){

    int userArray[8];
    int valor_busca = 0, repetitions = 0;

    printf("Monte seu Array: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &userArray[i]);
    }
    printf("Valor de busca: ");
    scanf("%d", &valor_busca);
    
    for (int i = 0; i < 8; i++)
    {
        if (valor_busca == userArray[i])
        {
            repetitions++;
        }
    }

    printf("O valor %d aparece %d vezes no Array", valor_busca, repetitions);
    return 0;
}