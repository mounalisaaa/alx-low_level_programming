#include "function_pointers.h"
int _strlen(char *str);
/**
 * print_name -  function that prints a name.
 * @name: ptr to str that should be printed.
 * @f: function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	int n;

	n = _strlen(name);
	write(1, name, n);
}
/**
 *  _strlen -  calculates the length of a string.
 * @str: pointer to a string.
 * Return: lenght.
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[i])
	{
		i++
	}
	return (0);
}
