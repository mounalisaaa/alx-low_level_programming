#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers.
 * @separator: string between numbers.
 * @n: number of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int arg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		printf("%d", arg);
		if (i + 1 < n)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
