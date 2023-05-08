#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals of a squeare matrix
 * @a: pointer to an integer
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
