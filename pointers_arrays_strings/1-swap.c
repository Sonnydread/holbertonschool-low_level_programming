#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: el 1er num
 * @b: el 2do num
 * Return: nothing
 */

void swap_int(int *a, int *b)

{

int temp = *a;
*a = *b;
*b = temp;

}
