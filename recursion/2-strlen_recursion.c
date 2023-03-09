#include "main.h"

/**
 * _strlen_recursion - length
 * @s: string to count
 * Return: valor del entero
 */

int _strlen_recursion(char *s)

{

if (*s == '\0')
{
return (0);
}

s++;
return (_strlen_recursion(s) + 1);
}
