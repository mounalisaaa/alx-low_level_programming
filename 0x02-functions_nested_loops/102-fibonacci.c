#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long sum;
	int count;

	for (count = 0; count < 50; count++)
	{

		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
