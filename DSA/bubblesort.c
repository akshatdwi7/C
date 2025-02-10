#include <stdio.h>

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void printArray(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", numbers[i]);
    }
}

int main()
{

    int array[] = {
        3, 2, 9, 5, 1, 7};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printArray(array, size);
}