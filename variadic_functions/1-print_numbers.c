#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print num
 * @separator: el string
 * @n: num de enteros
 * @...: variable num
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
va_list num;
unsigned int index;

va_start(num, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(num, int));

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(num);
}
