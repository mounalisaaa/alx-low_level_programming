#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num = 612852475143;
	long int largest_prime_factor = 1;
	long int factor;

	for (factor = 3; factor * factor <= num; factor += 2)
	{
		while (num % factor == 0)
		{
			largest_prime_factor = factor;
			num /= factor;
		}
	}
	if (num > 2)
	{
		largest_prime_factor = num;
	}
	printf("%ld\n", largest_prime_factor);
	return (0);
}
