#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
