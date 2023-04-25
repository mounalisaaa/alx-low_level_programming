#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 98;
	unsigned long long a = 1, b = 2;

	printf("%llu, %llu", a, b);
	for (int i = 2; i < n; i++)
	{
		unsigned long long c = a + b;

		printf(", %llu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
