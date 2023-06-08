#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 1 if little 0 if big endian.
*/
int get_endianness(void)
{
	unsigned int value = 0x12345678;
	unsigned char *ptr = (unsigned char *)&value;

	if (*ptr == 0x78)
		return (1);
	else
		return (0);
}
