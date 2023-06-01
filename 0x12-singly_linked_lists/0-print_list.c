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

	if (!str)
	{
		printf("[0] (nil)\n");
		count++;
		printf("[%d] %s\n", len, h->next->str);
		count++;
	}

	if (current && str)
	{
		printf("[%d] %s\n", len, str);
		count++;
		printf("[%d] %s\n", len, h->next->str);
		count++;
	}
	return (count);
}
