#include "main.h"
/**
 * clear_bit - set value
 * @n: value
 * @index: index
 *
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int x;

if (index >= sizeof(unsigned int) * sizeof(long))
{
return (-1);
}

x = ~(1 << index);
*n = *n & x;
return (1);
}
