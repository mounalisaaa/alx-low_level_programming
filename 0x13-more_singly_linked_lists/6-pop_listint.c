#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list.
 * @head: double pointer the the 1st node.
 * Return: the data of head node.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!*head)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;
	return (n);
}
