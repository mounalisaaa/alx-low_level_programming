#include "lists.h"
/**
 *add_node- adds a new node as the 1st node.
 * @head: ptr to a ptr to list_t
 * @str: str
 * Return: the addr of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		new->len = _strlen(str);
		new->next = *head;
		*head = new;
	}
	return (new);
}
/**
 * _strlen - func.
 * @str: str.
 * Return: len.
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
