#include "lists.h"

/**
 * dlistint_len - number of elemen
 * @h: Address
 * Return: number of elemen
 */
size_t dlistint_len(const dlistint_t *h)

{
size_t i = 0;

for (; h; h = h->next, i++)
continue;

return (i);
}
