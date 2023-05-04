#include "main.h"
/**
 * string_toupper -  function that changes all lowercases to uppercases.
 *@str: pointer.
 * Return: str.
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -=  ('a' - 'A');
		}
		str++;
	}
	return (str);
}
