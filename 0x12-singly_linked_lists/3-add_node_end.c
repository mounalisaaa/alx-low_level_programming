#include "lists.h"
/**
 * add_node_end - add new node as the last node.
 * @head: ptr to ptr to 1st node.
 * @str: str.
 * Return: add of new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
		new->len = _strlen(str);
		new->next = NULL;
	}

	if (*head == NULL)
	{
		*head = new;
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;

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
