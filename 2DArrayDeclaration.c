#include <stdio.h>

                // 2D Array = An array, where each element is an entire array
                // useful if you need a matrix, grid or table of data

int main(){

        /*
        int numbers[2][3] = {
                        {1, 2, 3},
                        {4, 5, 6}
                        };
        */

    // the first set of straight brackets is optional, you dont need to set it
    // but its necessary to set a maximum number of elements within each row
    // to access each element, you need to indexes [][], one [] for the row, one [] for the column
    int numbers[3][3];

    // first sizeof = entire size of the 2D array (9 elements)
    // second sizeof = size of one of the rows (3 elements)
    int rows = sizeof(numbers)/sizeof(numbers[0]); // 9:3 = 3

    // first sizeof = size of the first row (3 elements)
    // second sizeof = one of the elements of the first row (1)
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);

    // first row
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;

    // second row
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    // third row
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    for (int i = 0; i < rows; i++) // "i < 3", where [3] is the number of rows
    {
        // nested loop thats in charge of keeping track of the columns "[3]"
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}