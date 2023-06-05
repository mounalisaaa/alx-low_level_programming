#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the 1st node.
 * @idx: he index of the list where the new node should be added.
 * @n: data.
 * Return: NULL or ptr.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr;
	unsigned int i;
	listint_t *temp = malloc(sizeof(listint_t));

	if (!head || !temp)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	curr = *head;
	for (i = 0; i < idx - 1 && curr; i++)
	{
		curr = curr->next;
	}
	if (!curr)
	{
		free(temp);
		return (NULL);
	}
	temp->next = curr->next;
	curr->next = temp;
	return (temp);
}
