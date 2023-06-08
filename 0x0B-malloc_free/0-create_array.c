#include "main.h"
/**
 * create_array - unction that creates an array of chars,
 *  and initializes it with a specific char.
 * @size: num of elements in the array.
 * @c: char.
 * Return: arr or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
