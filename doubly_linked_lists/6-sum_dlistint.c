#include "lists.h"

/**
 * sum_dlistint - suma de data
 * @head: Address
 * Return: la suma
 */

int sum_dlistint(dlistint_t *head)

{
int sum = 0;

for (; head; head = head->next)
sum += head->n;

return (sum);
}
