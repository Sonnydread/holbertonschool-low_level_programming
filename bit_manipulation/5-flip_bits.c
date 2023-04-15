#include "main.h"
/**
 * flip_bits - return number
 * @n: number 1
 * @m: number 2
 *
 * Return: success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
int x = 0;
unsigned long int count;

count = n ^ m;

while (count)
{
x += count & 1;
count = count >> 1;
}

return (x);
}
