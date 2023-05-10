#include "main.h"
int _sqrt_helper(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer.
 * Return: natural square root of a number.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
/**
 * _sqrt_helper - helper function.
 * @n: integer.
 * @i: integer
 * Return: natural square.
*/
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}
