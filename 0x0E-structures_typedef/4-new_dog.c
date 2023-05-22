#include <stddef.h>
#include<stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strdup(char *str);
/**
 * new_dog - function that creates a new dog.
 * @name: 1st element.
 * @age: 2nd element.
 * @owner: 3rd element.
 * Return: new_dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
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
