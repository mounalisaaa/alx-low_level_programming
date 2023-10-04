#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in a hash table.
 *
 * @key: The key to be hashed.
 * @size: The size of the hash table's array.
 *
 * Return: The index of the key within the range [0, size-1].
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
