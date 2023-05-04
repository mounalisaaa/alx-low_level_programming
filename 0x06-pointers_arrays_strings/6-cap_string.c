#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: the string
 * Return: the captilized string
 **/
char *cap_string(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= ('a' - 'A');
	}
	while (str[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
			|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
			|| s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
			|| s[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= ('a' - 'A');
		}

		i++;
	}
	return (str);
}
