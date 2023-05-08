#include "main.h"
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
