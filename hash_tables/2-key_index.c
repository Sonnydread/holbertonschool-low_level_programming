#include "hash_tables.h"

/**
 * key_index - index
 * @key: key
 * @size: size
 * Return: index
 * Description: Use of djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)

{
return (hash_djb2(key) % size);
}
