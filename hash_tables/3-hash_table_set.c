#include "hash_tables.h"

/**
 * hash_table_set - add an element
 * @ht: hash table
 * @key: key
 * @value: the value
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)

{
unsigned long int x, index;
hash_node_t *new_node;

if (!ht || !key || !(*key) || !value)
return (0);
index = key_index((const unsigned char *)key, ht->size);
for (x = index; ht->array[x]; ++x)
{
if (strcmp(ht->array[x]->key, key) == 0)
{
free(ht->array[x]->value);
ht->array[x]->value = strdup(value);
return (1);
}
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
if (new_node->key == NULL)
return (0);
new_node->value = strdup(value);
if (new_node->value == NULL)
return (0);
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
