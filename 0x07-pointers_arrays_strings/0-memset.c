#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to the starts of the memory block
 * @b: the value of each memory bloc should be set to
 * @n: the number of bytes
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*ptr++ = b;
	}
	return (s);
}
