#include "main.h"

/**
 * print_sign - Imprimir el signo
 * @n: El num a revisar
 * Return: 1 para positivo, -1 para negativo o zero para otro
 */

int print_sign(int n)

{

if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}

}
