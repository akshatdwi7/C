#include <stdio.h>

int main()
{
    int sum = 0;
    int numbers[] = {
        1,
        43,
        343,
        4342,
        4322,
        5454,
        42,
    };

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) // size of function will take the size of whole araay in bites
    {
        printf("%d\n", numbers[i]);
        sum += numbers[i];
    }
    printf("Sum of numbers is %d\n", sum);
}