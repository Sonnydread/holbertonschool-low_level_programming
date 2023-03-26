#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - el string
 * @separator: string to print
 * @n: number of string
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
va_list str;
char *t;
unsigned int a;

va_start(str, n);
for (a = 0; a < n; a++)
{
t = va_arg(str, char *);
if (t == NULL)
{
t = "(nil)";
}
printf("%s", t);
if (separator != NULL && a != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(str);
}
