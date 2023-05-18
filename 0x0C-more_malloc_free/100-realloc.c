#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _realloc -  function that reallocates a memory block using malloc and free.
 * @ptr: ptr to the memory block that should be reallocated.
 * @old_size: the old size of the memory block.
 * @new_size: the new size of the memory block.
 * Return: NULL, or new_ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		size = old_size;
	}
	else
	{
		size = new_size;
	}
	_memcpy(new_ptr, ptr, size);
	free(ptr);

	return (new_ptr);
}
/**
 * _memcpy - function that copies memory area.
 * @dest: destination memory area.
 * @src: source memory ares.
 * @n: number of bytes to be copied.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
