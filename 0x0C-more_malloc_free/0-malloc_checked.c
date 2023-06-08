#include "main.h"
/**
 * malloc_checked - function that allocates memory.
 * @b: num of bytes of memory to allocate.
 * Return: ptr.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
