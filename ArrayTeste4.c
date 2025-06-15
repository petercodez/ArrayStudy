#include <stdio.h>
#include <string.h>

int main(){

    int array_original[] = {1,2,3,4,5};
    int array_copia[5];

    for (int i = 0; i < 5; i++)
    {
        array_copia[i] = array_original[i];
    }

    printf("Array Copiado:\n");
    for (int i = 0; i < 5; i++) {
    printf("%d\n", array_copia[i]);
    }
    return 0;
}

