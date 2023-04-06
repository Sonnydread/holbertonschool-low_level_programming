#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print elements
 * @h: pointer to structure
 * Return: nodes of list
 */

size_t print_list(const list_t *h)

{
unsigned int nodes;

nodes = 0;
while (h != NULL)
{
if (h->str)
{
printf("[%i] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
nodes++;
}
return (nodes);
}
