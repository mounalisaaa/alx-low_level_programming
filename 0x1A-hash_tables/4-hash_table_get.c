#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 *
 * @ht: A pointer to the hash table.
 * @key: The key whose associated value is to be retrieved.
 *
 * Return: The value associated with the given key,
 * or NULL if the key is not found
 * in the hash table or if @ht or @key is NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	hash_node_t *pair;

	if (!ht || !key)
		return (0);
	key_idx = key_index((const unsigned char *)key, ht->size);
	pair = ht->array[key_idx];
	while (pair)
	{
		if (!strcmp(pair->key, (char *)key))
			return (pair->value);
		pair = pair->next;
	}
	return (0);
}
