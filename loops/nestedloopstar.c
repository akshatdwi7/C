#include <stdio.h>

int main()
{
    int rows;
    int cols;
    char symbol;
    printf(" Enter the number of rows:)");
    scanf("%d", &rows);
    printf("Enter the number of columns:");
    scanf("%d", &cols);
    printf("Enter the symbol to be printed:");
    scanf(" %c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {

            printf("%c", symbol);
        }
        printf("\n");
    }
}