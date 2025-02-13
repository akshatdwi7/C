#include <stdio.h>

void sort()
{
}

int main()
{

    int array[] = {26, 89, 55, 12, 1, 7, 2, 44};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printsort(array, size);
}