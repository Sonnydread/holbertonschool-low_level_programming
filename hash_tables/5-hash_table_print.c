#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: Hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)

{
size_t x = 0;
hash_node_t *tmp = NULL, *tmp2 = NULL;
if (!ht)
return;
printf("{");
for (; x < ht->size; x++)
{
for (tmp = ht->array[x]; tmp; tmp = tmp->next)
{
if (tmp2)
printf(", ");
printf("'%s': '%s'", tmp->key, tmp->value);
tmp2 = tmp;
}
}
printf("}\n");
}
