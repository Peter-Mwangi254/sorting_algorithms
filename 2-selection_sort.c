#include"sort.h"

void selection_sort(int *array, size_t size)
{
size_t i, j, min_pos = 0;
int temp;

for (i = 0; i < size - 1; i++)
{
min_pos = i;
for (j = i + 1; j < size; j++)
{
if (array[min_pos] > array[j])
{
min_pos = j;
}
}
if (min_pos != i)
{
temp = array[i];
array[i] = array[min_pos];
array[min_pos] = temp;
print_array(array, size);
}
}       
}
