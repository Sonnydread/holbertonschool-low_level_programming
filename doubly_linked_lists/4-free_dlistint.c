#include "lists.h"

/**
 * free_dlistint - Free a doub
 * @head: Address
 */
void free_dlistint(dlistint_t *head)

{
dlistint_t *tmp = NULL;

for (; head; head = head->next, free(tmp))
tmp = head;
}
