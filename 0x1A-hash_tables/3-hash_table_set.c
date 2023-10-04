#include "hash_tables.h"

char *_strdup(const char *s)
{
	int i;
	char *new;

	i = 0;
	while (s[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (0);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = 0;
	return (new);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx;
	hash_node_t *temp;
	hash_node_t *item;
	
	key_idx = key_index((const unsigned char *)key, ht->size);
	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (0);
	item->key = _strdup(key);
	item->value = _strdup(value);
	if (ht->array[key_idx] == NULL)
	{
		ht->array[key_idx] = item;
		item->next = NULL;
	}
	else
	{
		temp = ht->array[key_idx];
		ht->array[key_idx] = item;
		item->next = temp;
	}
	return (1);
}
