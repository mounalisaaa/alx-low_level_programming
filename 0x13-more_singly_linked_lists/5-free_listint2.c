#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer to pointer to 1st node.
*/
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *ptr;

	if (!*head)
		return;

	while (curr)
	{
		ptr = curr;
		curr = curr->next;
		free(ptr);
	}
	*head = NULL;
}
