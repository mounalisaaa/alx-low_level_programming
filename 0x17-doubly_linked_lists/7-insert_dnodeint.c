#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head pointer
 * @idx: the index
 * @n: the data`s node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *curr = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!*h)
		return (NULL);

	while (i < idx - 1)
	{
		curr = curr->next;
		i++;
	}
	new->next = curr->next;
	curr->next = new;
	new->prev = curr;

	return (new);
}
