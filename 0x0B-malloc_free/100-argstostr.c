#include "main.h"
char *_strcpy(char *dest, char *src);
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: num of arguments in the av.
 * @av: ptr to array of strings.
 * Return: NULL or result.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int len;
	char *result;
	int position;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}
	result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (NULL);

	position = 0;
	for (i = 0; i < ac; i++)
	{
		_strcpy(result + position, av[i]);
		position += _strlen(av[i]);
		result[position++] = '\n';
	}
	result[position] = '\0';
	return (result);
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
