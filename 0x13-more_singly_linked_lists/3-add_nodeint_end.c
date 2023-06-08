#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to the 1st node.
 * @n: data.
 * Return: the address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (!*head)
	{
		*head = temp;
		return (*head);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (*head);
}
