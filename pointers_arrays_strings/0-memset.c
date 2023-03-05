#include "main.h"

/**
 * _memset - llena la memoria
 * @s: direcccion
 * @b: valor deseado
 * @n: numero de bytes
 * Return: los cambios
 */

char *_memset(char *s, char b, unsigned int n)
{

int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
