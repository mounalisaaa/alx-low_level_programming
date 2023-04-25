#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib1 = 0;
	int fib2 = 1;
	int count;

	for (count = 0; count < 50; count++)
	{
		printf("%d, ", count);

		sum = fib1 + fib2;
		printf("%d, ", sum);

		fib1 = fib2;
		fib2 = sum;
		if (count == 49)
			printf("\n");
	}

	return (0);
}
