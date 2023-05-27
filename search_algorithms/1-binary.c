#include "search_algos.h"

/**
 * binary_search - searches a value in a sorted array
 *  @array: pointer to the 1st element
 *  @size: number of elements in array
 *  @value: value
 *  Return: 1 if succeed
 */

int binary_search(int *array, size_t size, int value)
{
size_t mid, low, high, S;

if (!array)
{
return (-1);
}
high = (size - 1);
low = 0;
while (low <= high)
{
printf("Searching in array: ");
for (S = low; high > S; S++)
{
printf("%d, ", array[S]);
}
printf("%d\n", array[S]);
mid = (low + high) / 2;

if (value == array[mid])
{
return (mid);
}

if (value > array[mid])
{
low = mid + 1;
}

if (value < array[mid])
{
high = mid - 1;
}
}
return (-1);
}
