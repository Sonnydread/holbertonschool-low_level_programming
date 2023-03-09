#include "main.h"

/**
 * factorial - calcular el fact
 * @s: num a calcular
 * Return: entero
 */

int factorial(int n)

{

if (n < 0)
return (-1);

if (n <= 1)
return (1);

return (n * factorial(n - 1));

}
