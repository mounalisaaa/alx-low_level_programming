#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: ptr to int.
 * @index: index starting from 0 of the bit you want to set.
 * Return: -1 or 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
