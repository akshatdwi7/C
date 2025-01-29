#include <stdio.h>

int main()
{
    int age;
    printf("\nWhat is your age ?");

    scanf("%d", &age);
    // fgets () is used to read a line of text from the standard input.
    printf("your age is %d years old\n", age);
    return 0;
}