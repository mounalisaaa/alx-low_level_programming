#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1 ; j < 100; j++)
		{
			putchar(i / 10 + 48);
			putchar(i % 10 + 48);
			putchar(' ');
			putchar(j / 10 + 48);
			putchar(j % 10 + 48);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
