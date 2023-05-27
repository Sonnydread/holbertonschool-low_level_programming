#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: 1st element of the array
 * @size: size number of elements
 * @value: value
 * Return: 1 for success
 */

int linear_search(int *array, size_t size, int value)
{
size_t x;

if (!array)
{
return (-1);
}
x = 0;
while (x < size)
{
printf("Value checked array[%ld] = [%d]\n", x, array[x]);
if (array[x] == value)
{
return (x);
}
x++;
}
return (-1);
}
