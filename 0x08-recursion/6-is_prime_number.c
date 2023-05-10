#include "main.h"
int prime_helper(int n, int i);
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: integer.
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_helper(n, n - 1));
}
/**
 * prime_helper - helper function
 * @n: integer.
 * @i: integer.
 * Return: 1 or 0
*/
int prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (prime_helper(n, i - 1));
}
