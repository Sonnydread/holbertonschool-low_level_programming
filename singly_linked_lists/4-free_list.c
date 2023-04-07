#include "lists.h"

/**
 * free_list - that frees a list_t
 * @head: to be free
 * Return: void
 */

void free_list(list_t *head)

{
if (!head)
return;
free_list(head->next);
free(head->str);
free(head);
}
