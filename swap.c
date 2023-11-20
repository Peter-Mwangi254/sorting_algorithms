#include"sort.h"

void swap(int *a, int *b)
{
    int swp;

    swp = *a;
    *a = *b;
    *b = swp;
}