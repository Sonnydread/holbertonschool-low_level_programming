#include "function_pointers.h"

/**
 * print_name - print name
 * @name: el nombre
 * @f: el puntero
 * Return: vacío
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
