#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to the first node.
*/
void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *ptr;

	while (curr)
	{
		ptr = curr;
		curr = curr->next;
		free(ptr);
	}
	head = NULL;
}
