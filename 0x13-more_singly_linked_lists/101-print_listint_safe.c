#include "lists.h"
size_t print_listint_safe(const listint_t *head)
{
	unsigned int count = 0;
	const listint_t *curr, *prev = NULL;
	int n;

	curr = head;
	while (curr)
	{
		n = curr->n;
		if (curr <= prev)
		{
			printf("[%p]%d\n", (void *)curr, n);
			exit(98);
		}
		printf("[%p]%d\n", (void *)curr, n);
		prev = curr;
		curr = curr->next;
		count++;
	}

	return (count);
}