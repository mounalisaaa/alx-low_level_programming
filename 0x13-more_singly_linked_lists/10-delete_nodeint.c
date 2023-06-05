#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index
 * of a listint_t linked list.
 * @head: double pointer to the head of the list.
 * @index: index of the node that should be deleted.
 * Return: -1 or 1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int i;

	if (!*head)
		return (-1);
	curr = *head;
	prev = *head;
	if (index == 0)
	{
		prev = prev->next;
		*head = prev;
		free(curr);
		curr = NULL;
		return (1);
	}

	for (i = 0; i < index && curr; i++)
	{
		curr = curr->next;
	}

	for (i = 0; i < index - 1 && prev; i++)
	{
		prev = prev->next;
	}

	prev->next = curr->next;
	free(curr);
	curr = NULL;
	return (1);
}
