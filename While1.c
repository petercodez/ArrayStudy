#include <stdio.h>

// Validação de Entrada

int main(){

    int userInput;

    printf("Digite um numero positivo: ");
    scanf("%d", &userInput);
    while (userInput < 0)
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &userInput);
    }
    printf("Numero positivo confirmado = %d", userInput);
    return 0;
}