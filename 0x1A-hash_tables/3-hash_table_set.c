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

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx;
	hash_node_t *temp;
	hash_node_t *item;
	
	if (!key || !ht || !value)
		return (0);
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
		while (temp)
		{
			if (!_strcmp(temp->key, item->value))
			{
				free(temp->value);
				temp->value = item->value;
				free(item->key);
				free(item);
				return (1);
			}
			temp = temp->next;
		}
		ht->array[key_idx] = item;
		item->next = temp;
	}
	return (1);
}
