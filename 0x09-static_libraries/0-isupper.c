#include "main.h"
/**
 * _isupper - return 1 if the character is a uppercase, and 0 otherwise.
 * @c: the number to be checked
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
