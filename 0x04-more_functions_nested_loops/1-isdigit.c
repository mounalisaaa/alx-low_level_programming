#include "main.h"
/**
 * _isdigit - return 1 if the character is a digit, and 0 otherwise.
 * @c: the number to be checked
 * Return: Always 1 for true and 0 for false.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
