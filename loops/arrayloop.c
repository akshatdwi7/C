#include <stdio.h>

int main()
{
    char *names[] = {
        "Alice", "Bob", "Charlie", "David", "Eve",
        "Frank", "Grace", "Hank", "Ivy", "Jack"};

    for (int i = 1; i <= 10; i++)
    {
        printf("%s\n", names[i]);
    }
}