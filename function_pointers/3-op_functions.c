#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - opad
 * @a: valor
 * @b: valor
 * Return: void
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - opsub
 * @a: valor
 * @b: valor
 * Return: void
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - opmul
 * @a: valor
 * @b: valor
 * Return: void
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - opdiv
 * @a: valor
 * @b: valor
 * Return: void
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - opmod
 * @a: valor
 * @b: valor
 * Return: void
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
