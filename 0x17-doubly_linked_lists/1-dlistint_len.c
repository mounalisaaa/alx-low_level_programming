#include "lists.h"
/**
 * dlistint_len - it return the num of elements of a linked list
 * @h: head pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
