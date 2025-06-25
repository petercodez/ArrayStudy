#include <stdio.h>

// Média de Notas
// Valor negativo para finalizar o laço
// Não contabilizar o valor negativo no cálculo

int main(){

    int userInput = 0, total = 0, media, somaInputs = 0;
    
    printf("Insira notas entre 0 e 100: ");
    scanf("%d", &userInput);
    somaInputs += userInput;
    
    while ((userInput > 0) && (userInput < 100))
    {
        printf("Insira notas entre 0 e 100: ");
        scanf("%d", &userInput);
        if (userInput < 0)
        {
            userInput = 0;
        }
        somaInputs += userInput;
        total++; 
    }
    media = somaInputs / total;
    printf("Media das notas = %d ", media);
    return 0;
}