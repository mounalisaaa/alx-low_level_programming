#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table.
 *
 * @ht: A pointer to the hash table to be printed.
 *
 * Return: None.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	int printed;

	if (!ht)
		return;
	i = 0;
	printed = 0;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (printed)
				printf(", ");
			curr = ht->array[i];
			while (curr)
			{
				printf("\'%s\': \'%s\'", curr->key, curr->value);
				if (curr->next)
					printf(", ");
				curr = curr->next;
			}
			printed = 1;
		}
		i++;
	}
	printf("}\n");
}
