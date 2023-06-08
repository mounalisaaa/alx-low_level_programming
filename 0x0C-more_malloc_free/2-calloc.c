#include "main.h"
char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of each element.
 * Return: NULL, or ptr.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to the starts of the memory area.
 * @b: the const byte to fill the memoray area.
 * @n: the number of bytes the fill.
 * Return: s .
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
