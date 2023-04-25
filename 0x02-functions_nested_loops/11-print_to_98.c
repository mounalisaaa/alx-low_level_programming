#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: the numberof start
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(',');
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(',');
			}
			n++;
		}
	}
	_putchar('\n');
}
