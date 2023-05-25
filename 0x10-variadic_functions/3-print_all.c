#include <stdio.h>
#include "variadic_functions.h"
int _strlen(const char *s);
/**
 * print_all - function that prints anything.
 * @format:  list of types of args.
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int bi = 0;
	char *s;

	va_start(args, format);

	while (format && format[bi])
	{
		switch (format[bi])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = (va_arg(args, char *));
			if (s == NULL)
				s = "(nil)";

			printf("%s", s);
			break;
		default:
			bi++;
			continue;
		}
		if (bi != _strlen(format) - 1)
			printf(", ");
		bi++;
	}
	printf("\n");
	va_end(args);
}
/**
 *  _strlen -  calculates the length of a string.
 * @s: pointer to a string.
 * Return: lenght.
 */

int _strlen(const char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
