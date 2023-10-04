#include "hash_tables.h"

/**
 * free_item - Frees memory associated with a hash node.
 *
 * @item: A pointer to the hash node to be freed.
 */
void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

/**
 * hash_table_delete - Deletes a hash table and its elements.
 *
 * @ht: A pointer to the hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	hash_node_t *next;

	if (!ht)
		return;
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				next = curr->next;
				free_item(curr);
				curr = next;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
