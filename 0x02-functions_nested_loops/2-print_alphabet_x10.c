#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	for(i=0; i<10; i++)
	{
		int alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
