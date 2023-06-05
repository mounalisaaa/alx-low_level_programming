#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the first node in the list.
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
