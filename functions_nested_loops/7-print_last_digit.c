#include "main.h"

/**
* prints the last digit - Imprime el último num
* @n: el num
* Return: valor del último num
*/

int print_last_digit(int n)

{
int last;

last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);

}
