#include "sort.h"

/**
 * partition - function that partitions the array
 * @array: array of integers
 * @low: starting index of the array
 * @high: ending index of the array
 * @size: size of the array
 * Return: pivot index
 */

int partition(int *array, int low, int high, size_t size)
{
int pivot, temp;
int i, j;

pivot = array[high];
i = low - 1;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
i++;
if (i != j)
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}

if (i + 1 != high)
{
temp = array[i + 1];
array[i + 1] = array[high];
array[high] = temp;
print_array(array, size);
}

return (i + 1);
}

/**
 * quick_sort_recursive - function that implements the Quick sort algorithm
 * @array: array of integers
 * @low: starting index of the array
 * @high: ending index of the array
 * @size: size of the array
 * Return: void
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
int p;

if (low < high)
{
p = partition(array, low, high, size);
quick_sort_recursive(array, low, p - 1, size);
quick_sort_recursive(array, p + 1, high, size);
}
}

/**
 * quick_sort - function that sorts an array of intergers in ascending order
 * using the Quick sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

quick_sort_recursive(array, 0, size - 1, size);
}
