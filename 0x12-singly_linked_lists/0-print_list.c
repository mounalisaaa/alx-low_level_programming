#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to 1st node.
 * Return: the number of node.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	char *str = current->str;
	unsigned int len = current->len;
	int count = 0;

	if (current)
	{
		if (str)
		{
			printf("[%d] %s\n", len, str);
			count++;
		}
		else
		{
			printf("[0] (nil)\n");
			count++;
		}
		printf("[%d] %s\n", len, h->next->str);
		count++;
	}
	return (count);
}
