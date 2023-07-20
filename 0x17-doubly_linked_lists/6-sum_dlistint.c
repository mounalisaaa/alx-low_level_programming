#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 * @head: head pointer
 * Return: sum or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	if (!head)
		return (0);
	while (curr->next)
	{
		sum += curr->n;
		curr = curr->next;
	}
	sum += curr->n;
	return (sum);
}
