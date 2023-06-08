#include "main.h"
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
/**
 * str_concat - function that concatenates two strings.
 * @s1: ptr to string.
 * @s2: ptr to str.
 * Return: str or NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = _strlen(s1) + _strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);

	if (str == 0)
		return (NULL);

	_strcpy(str, s1);
	_strcat(str, s2);

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
 * _strcat - concatenate two strings
 *
 * @dest: destination string
 * @src: source srting
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
