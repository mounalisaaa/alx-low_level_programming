#include "main.h"
/**
 * flip_bits - returns the number of bits fliped.
 * @n: number.
 * @m: number.
 * Return: count.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int flip = n ^ m;

	while (flip != 0)
	{
		flip &= (flip - 1);
		count++;
	}
	return (count);
}
