#include "main.h"
/**
 * get_bit - return value
 * @n: number
 * @index:  index
 *
 * Return: Value bit
 */
int get_bit(unsigned long int n, unsigned int index)
{

int val;

if (index > 63)
return (-1);
val = (n >> index) & 1;
return (val);
}
