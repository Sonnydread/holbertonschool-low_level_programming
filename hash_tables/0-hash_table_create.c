#include "hash_tables.h"

/**
 * hash_table_create - hash table
 * @size: size
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)

{
hash_table_t *ht = NULL;
(void)size;

ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
{
free(ht);
return (NULL);
}
ht->size = size;
ht->array = calloc(size, sizeof(hash_node_t *));
if (ht->array == NULL)
{
free(ht->array);
free(ht);
return (NULL);
}
return (ht);
}
