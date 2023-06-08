#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: ptr to the int
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{

	if (!n || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
