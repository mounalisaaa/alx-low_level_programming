#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: int.
 * @argv: arr to str.
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	int n, i;
	int coins[] = {25, 10, 5, 2, 1};
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
	}
	else
	{
		change = 0;
		for (i = 0; i < 5; i++)
		{
			while (n >= coins[i])
			{
				n -= coins[i];
				change++;
			}
		}
		printf("%d\n", change);
	}
	return (0);
}
