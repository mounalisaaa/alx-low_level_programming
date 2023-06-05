#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n) of
 *  a listint_t linked list.
 * @head: head pointer.
 * Return: the sum of the data.
 */
int sum_listint(listint_t *head)
{
	listint_t *curr;
	int n, sum = 0;

	if (!head)
		return (0);
	curr = head;
	while (curr)
	{
		n = curr->n;
		sum += n;
		curr = curr->next;
	}
	return (sum);
}
