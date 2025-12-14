#include "sort.h"

/**
 * bubble_sort - function that sorts an array of intergers in ascending order
 * using the Buble Sort algorithm
 * @array: array of intergers
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
size_t i;
int temp;
int swapped = 1;

if (!array || size < 2)
return;

while (swapped == 1)
{
swapped = 0;
i = 0;

while (i < size - 1)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;

swapped = 1;
print_array(array, (int)size);
}
i++;
}
}
}
