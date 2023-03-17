#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - conecta 2 cadenas
 * @s1: valor1
 * @s2: valor2
 * @n: el valor
 *
 * Return: resultado
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
char *a;
unsigned int b, c, d;

if (s1 == NULL)
{
b = 0;
}
else
{
for (b = 0; *(s1 + b) != '\0'; b++)
;
}
if (s2 == NULL)
{
c = 0;
}
else
{
for (c = 0; *(s2 + c) != '\0'; c++)
;
if (n < c)
c = n;
}
c += b;
a = malloc(sizeof(char) * (c + 1));
if (a == NULL)
return (NULL);
for (d = 0; d < b; d++)
a[d] = *(s1 + d);
for (b = 0; d < c; b++)
a[d++] = *(s2 + b);
a[d] = '\0';
return (a);
}
