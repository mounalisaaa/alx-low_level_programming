#include "main.h"
/**
 * _strcmp - function that compares two strings.
 *
 * @s1: pointer of the first string to be compared.
 * @s2: pointer of the second string to be compared.
 * Return: integer.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
