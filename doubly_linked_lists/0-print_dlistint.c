#include "lists.h"

/**
 * print_dlistint - elements doub link li
 * @h: Address
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)

{
size_t i = 0;

for (; h; h = h->next, i++)
printf("%d\n", h->n);

return (i);
}
