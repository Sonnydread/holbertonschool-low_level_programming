#include "main.h"

/**
 * print_binary - prints a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{

unsigned long int x, y, z;

x = n;
y = 0;
if (n == 0)
{
_putchar('0');
return;
}
while (x != 0)
{
y++;
x = x >> 1;
}
while (y)
{
x = n;
for (z = 1; z < y; z++)
x = x >> 1;
if (x == (x | 1))
_putchar('1');
else
_putchar ('0');
y--;

}
}
