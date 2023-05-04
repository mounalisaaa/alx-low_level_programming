#include "main.h"
/**
 * string_toupper -  function that changes all lowercases to uppercases.
 *@str: pointer.
 * Return: str.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
