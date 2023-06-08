#include "lists.h"
/**
 * list_len - returns the number of elements in list_t.
 * @h: pointer the the 1st node.
 * Return: num of nodes.
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
