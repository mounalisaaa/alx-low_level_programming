#include "function_pointers.h"
/**
 * array_iterator -  executes a fun given as a parameter
 * on each element of an array.
 * @array: array.
 * @size: the size of the array.
 * @action: ptr to the fun.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
