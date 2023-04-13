#include "lists.h"

/**
 * get_dnodeint_at_index - devuelve nudo
 * @head: head
 * @index: index
 * Return: Address
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
for (; head && index; head = head->next, index--)
continue;
return (head);
}
