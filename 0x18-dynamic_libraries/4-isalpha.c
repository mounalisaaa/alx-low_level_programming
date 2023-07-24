#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check if the c is an alphabetic letter or not.
 * @c: the number to be checked
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
