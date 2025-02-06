#include <stdio.h>

int findMax(int x, int y)
{
    return (x > y) ? x : y; // terternay opertaor
}

int main()
{

    int max = findMax(6, 12);
    printf("%d\n", max);
}