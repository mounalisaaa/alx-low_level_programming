#include "lists.h"
/**
 * free_dlistint - free the linked list
 * @head: head pointer
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
