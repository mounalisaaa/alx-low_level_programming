#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int.
 * @b: str of '0' and '1' chars.
 * Return: the integer.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int weight = 1;

	if (!b)
		return (0);
	while (b[1] != '\0')
		b++;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		if (*b == '1')
			i += weight;

		weight *= 2;
		b--;
	}

	return (i);
}
