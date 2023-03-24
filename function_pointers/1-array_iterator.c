#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array
 * @size: size
 * @action: acción
 * Return: vacío
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
unsigned int i = 0;

if (array != NULL && action != NULL && size > 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
