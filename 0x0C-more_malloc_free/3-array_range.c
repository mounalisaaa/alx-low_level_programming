#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: minimum value of the array.
 * @max: maximum value of the array.
 * Return: NULL or ptr
 */
int *array_range(int min, int max)
{
	int n, i;
	int *ptr;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	ptr = malloc(n * sizeof(int));
	if (ptr == 0)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
