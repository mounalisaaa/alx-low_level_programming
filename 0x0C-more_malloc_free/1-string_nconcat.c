#include "main.h"
char *_strncat(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: ptr to a str.
 * @s2: ptr to str.
 * @n: num of bytes concatenated from s2.
 * Return: str or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = _strlen(s1) + n + 1;

	str = malloc(len);
	if (str == NULL)
	{
		return (NULL);
	}

	_strcpy(str, s1);
	_strncat(str, s2, n);

	return (str);
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
 * _strcpy - copys str to another
 * @dest: destination string
 * @src: the str that we gonna copy
 *
 * Return: the pointer to dst
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}

/**
 * _strncat - concatenate two strings
 *
 * @dest: destination string
 * @src: source srting
 * @n: integer that specify the max num of chars copy from src to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
