#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array of integers
 * @size: size of the array
 * @Return: void
 */

void selection_sort(int *array, size_t size)
{
int min, temp, i, j;
for (j = 0; j < size; j++)
{
min = array[j];
for (i = j; i < size; i++)
{
if (array[i] < array[min])
{
min = i;
}
}
if (min != j)
{
temp = array[j];
array[j] = array[min];
array[min] = temp;
}
}
}
