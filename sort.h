#ifndef SORT_
#define SORT_

#include<stdio.h>
#include<stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

/*print functions*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*helper functions*/
void quicksort_recursion(int array, int low, int high, size_t size);
int partition_array(int *array[], int low, int high, size_t size);
void swap(int *a, int *b);

/*sorting algorithms*/
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
#endif
