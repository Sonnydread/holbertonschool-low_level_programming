#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - regresa el num de la raiz
 * @n: num a calcular
 *
 * Return: num natural de la raiz
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - calcula  el num de la raiz
 * @n: num a calcular
 * @i: inter num
 *
 * Return: num natural de la raiz
 */
int _sqrt(int n, int i)
{
int sqrt = i * i;

if (sqrt > n)
return (-1);

if (sqrt == n)
return (i);

return (_sqrt(n, i + 1));
}
