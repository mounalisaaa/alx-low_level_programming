#include "main.h"

/**
 *  _strlen -  calculates the length of a string.
 * @s: pointer to a string.
 * Return: i.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
