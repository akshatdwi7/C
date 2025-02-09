#include <stdio.h>

int main()
{

    int numbers[] = {
        1,
        43,
        343,
        4342,
        4322,
        5454,
        42,
    };

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        printf("%d\n", numbers[i]);
    }
}