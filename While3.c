#include <stdio.h>

// Tabuada

int main(){
    int userInput, tabuada = 1;
    
    printf("Qual tabuada voce quer? ");
    scanf("%d", &userInput);
    while (tabuada <= 10)
    {
        printf("%d x %d = %d\n", userInput, tabuada, (userInput*tabuada));
        tabuada++;
    }
    return 0;
}