#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 *
 * @size: The size of the array for the hash table.
 *
 * Return: A pointer to the newly created hash table on success,
 *         or NULL if memory allocation fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *map = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!map)
		return (NULL);
	map->size = size;
	map->array = malloc(sizeof(hash_node_t *) * size);
	if (!map->array)
		return (NULL);
	for (i = 0; i < size; i++)
		map->array[i] = NULL;
	return (map);
}
