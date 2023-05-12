#include "main.h"
/**
 * _strpbrk - searches a strings for any of a set bytes
 * @s: string
 * @accept: set of bytes
 * Return: pointer to the first accurrence of any bytes in the s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (0);
}
