#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the 1st node.
 * @index: position in the list startin from 0
 * Return: node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *curr = head;

	if (!head)
		return (NULL);
	for (n = 0; n < index; n++)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}
	return (curr);
}
