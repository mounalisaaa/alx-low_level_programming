#include "function_pointers.h"
/**
 * print_name -  function that prints a name.
 * @name: ptr to str that should be printed.
 * @f: function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
