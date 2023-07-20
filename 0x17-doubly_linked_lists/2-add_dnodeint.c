#include "lists.h"
/**
 * add_dnodeint - add a node at the beg
 * @head: head pointer
 * @n: data
 * Return: Null or new address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head)
		(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
