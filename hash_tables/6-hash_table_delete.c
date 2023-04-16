#include "hash_tables.h"

/**
 * hash_table_delete - delete
 * @ht: ht to delete
 */
void hash_table_delete(hash_table_t *ht)

{
unsigned long int x;
hash_table_t *head = ht;
hash_node_t *node, *temp;

for (x = 0; x < ht->size; x++)
{
if (ht->array[x] != NULL)
{
node = ht->array[x];
while (node != NULL)
{
temp = node->next;
free(node->key);
free(node->value);
free(node);
node = temp;
}
}
}
free(head->array);
free(head);
}
