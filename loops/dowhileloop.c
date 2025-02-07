#include <stdio.h>

int main()
{
    int number = 0;
    int sum = 0;

    do
    {
        printf(" Enter your number ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
            printf("Number will be %d\n", number);
        }
    } while (number > 0);
    printf(" sum will be %d\n", sum);
    return 0;
}
