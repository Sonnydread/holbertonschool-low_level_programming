#include "lists.h"

/**
 * free_list - that frees a list_t
 * @head: to be free
 */

void free_list(list_t *head)

{

list_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
