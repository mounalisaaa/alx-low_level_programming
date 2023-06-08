#include "main.h"
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _strdup - duplicate str and returns a ptr to newly allocated str.
 * @str: ptr to be duplicated.
 * Return: NULL or str1.
 */
char *_strdup(char *str)
{
	char *str1;
	unsigned int len;

	if (str == 0)
	{
		return (NULL);
	}
	len = _strlen(str) + 1;
	str1 = (char *)malloc(sizeof(char) * len);
	if (str1 == 0)
	{
		return (NULL);
	}
	_memcpy(str1, str, len);
	return (str1);
}
/**
 *  _strlen -  calculates the length of a string.
 * @s: pointer to a string.
 * Return: lenght.
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
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
