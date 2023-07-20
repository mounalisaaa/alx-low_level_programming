#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head pointer
 * @index: index of the node returned
 * Return: node and Null if node doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *curr = head;

	while (n < index)
	{
		curr = curr->next;
		if (!curr)
			return (NULL);
		n++;
	}
	return (curr);
}
