#include "main.h"

/**
 * print_most_numbers - Imprimir del 0 al 9
 * Description: Imprime menos el 2 el 4
 * Return: num del 0 al 9
 */

void print_most_numbers(void)

{

int x = 0;

for (; x <= 9; x++)
{
if (x == 2 || x == 4)
{
continue;
}
else
{
_putchar(x + '0');
}
}
_putchar('\n');

}
