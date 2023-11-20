#include"sort.h"

/**
* bubble_sort - function that sorts an array of integers
* in ascending order using the Bubble sort algorithm
* @array: the array to sort
* @size: length of the array
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
size_t i = 0, j = 0;
int temp = 0;

if (array == NULL || size == 0)
return;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j + 1];
array[j + 1] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}
}
