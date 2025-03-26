#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000000000 // 1 Billion numbers (≈ 8GB of RAM required)

// Compare function for qsort
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

// Merge two sorted arrays
void merge(int *arr1, int *arr2, int *merged, long size)
{
    long i = 0, j = 0, k = 0;
    while (i < size && j < size)
    {
        merged[k++] = (arr1[i] < arr2[j]) ? arr1[i++] : arr2[j++];
    }
    while (i < size)
        merged[k++] = arr1[i++];
    while (j < size)
        merged[k++] = arr2[j++];
}

int main()
{
    // Allocate large memory dynamically (8GB)
    int *arr1 = (int *)malloc(SIZE / 2 * sizeof(int));
    int *arr2 = (int *)malloc(SIZE / 2 * sizeof(int));
    int *merged = (int *)malloc(SIZE * sizeof(int));

    if (!arr1 || !arr2 || !merged)
    {
        printf("Memory allocation failed! Try reducing SIZE.\n");
        return 1;
    }

    // Initialize random seed
    srand(time(NULL));

    // Generate random numbers
    printf("Generating random numbers...\n");
#pragma omp parallel for
    for (long i = 0; i < SIZE / 2; i++)
    {
        arr1[i] = rand();
        arr2[i] = rand();
    }

    // Measure sorting time
    printf("Sorting arrays...\n");
    clock_t start_sort = clock();
#pragma omp parallel sections
    {
#pragma omp section
        qsort(arr1, SIZE / 2, sizeof(int), compare);

#pragma omp section
        qsort(arr2, SIZE / 2, sizeof(int), compare);
    }
    clock_t end_sort = clock();

    // Measure merging time
    printf("Merging arrays...\n");
    clock_t start_merge = clock();
    merge(arr1, arr2, merged, SIZE / 2);
    clock_t end_merge = clock();

    // Calculate time taken
    double time_sort = ((double)(end_sort - start_sort)) / CLOCKS_PER_SEC;
    double time_merge = ((double)(end_merge - start_merge)) / CLOCKS_PER_SEC;

    printf("Sorting Time: %.2f seconds\n", time_sort);
    printf("Merging Time: %.2f seconds\n", time_merge);
    printf("Total Execution Time: %.2f seconds\n", time_sort + time_merge);

    // Free allocated memory
    free(arr1);
    free(arr2);
    free(merged);

    return 0;
}
