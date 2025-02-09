/*
2D array = an array where each element is an entire
 araay useful if you need matrix, grid or table data

*/
#include <stdio.h>

int main()
{

    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    a[0][2] = 0;
    int rows;
    int columns;
    rows = sizeof(a) / sizeof(a[0]);          // number of rows
    columns = sizeof(a[0]) / sizeof(a[0][0]); // sizeof(a[0]) is the size of the first row

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("  \n");
    }
}