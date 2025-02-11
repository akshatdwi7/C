#include <stdio.h>

#include <string.h>

int main()
{

    char cars[2][5][10] = {
        {
            "tesla", "ford", "mg", "bmw", "toyota"
        },
        {
            "swift ", "alto", "i20", "bmw" , "mercedes"
        },
    };

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);
   

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < columns; j++) {

            printf(" %s", cars[i][j]);
        }

        printf("\n");
    }
    return 0;


}