#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the 1st node in the list.
 * Return: numbers of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
