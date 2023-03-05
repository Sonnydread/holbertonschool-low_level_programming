#include "main.h"

/**
 * _memcpy - funcion de copiar
 * @dest: almacena
 * @src: donde se copia
 * @n: num de bytes
 * Return: resultante
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{

int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
