#include "lists.h"

/**
 * add_dnodeint_end - Ad new node
 * @head: Address
 * @n: value
 * Return: Address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
dlistint_t *new = NULL, *tmp = *head;

new = malloc(sizeof(dlistint_t));

if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (!(*head))
{
new->prev = NULL;
*head = new;
return (new);
}
for (; tmp->next; tmp = tmp->next)
continue;
tmp->next = new;
new->prev = tmp;
return (new);
}
