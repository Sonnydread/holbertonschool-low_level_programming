#include "main.h"

/**
 * more_numbers - 10 veces del 0 al 14
 * Return: 10 veces del 10 al 14
 */

void more_numbers(void)

{

int x, y;

for (x = 0; x < 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 9)
{
_putchar((y / 10) + '0');
}
_putchar((y % 10) + '0');
}
_putchar('\n');
}

}
