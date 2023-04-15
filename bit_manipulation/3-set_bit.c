#include "main.h"

/**
 * set_bit - sets the value
 * @n: number
 * @index: index
 * Return: 1 4 success
 */
int set_bit(unsigned long int *n, unsigned int index)

{
unsigned long int x, z;

x = (sizeof(unsigned long int) * 8) - 1;

if (index > x)
return (-1);
z = 1 << index;
*n = *n | z;
return (1);
}
