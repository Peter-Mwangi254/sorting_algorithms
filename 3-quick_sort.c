#include"sort.h"

/**
* quick_sort - Function arranges an array in ascending order using quick sort algotrithm
* @array: array to sort
* @size: size of the array
* Return: void
*/
void quick_sort(int *array, size_t size)
{   
    if (array == NULL || size < 2)
        return;

    quicksort_recursion(array, 0, size - 1, size);
}

/**
* quicksort_recursion - Function that recurs given arrays
* @array: Array to sort
* @low: lower value
* @high: Higher value
* Return: void
*/
void quicksort_recursion(int array[], int low, int high, size_t size)
{
    if (low < high)
    {
    int pivot_index = partition_array(array, low, high, size);
    quicksort_recursion(array, low, pivot_index - 1, size);
    quicksort_recursion(array, pivot_index + 1, high, size);
    }
}

/**
* partition_array - Function that partitions an array of integers
* @array: array to be partitioned
* @low: lower value
* @high: higher value
* @size: size of array
* Return: i
*/
int partition_array(int *array, int low, int high, size_t size)
{
    int *pivot = &array[high];
    int i = low - 1;

    int j;
    for (j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
            print_array(array, size);
        }
    }
    swap(&array[i + 1], &array[high]);

    return (i + 1);
}

/**
* swap - function that swaps integers
* @a: first integer to swap
* @b: second integer to swap
* Return: void
*/
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
