#include "main.h"
/**
 *  rev_string - it reverse a string.
 * @s: string parameter.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = _strlen(s) - 1;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];

		s[j] = temp;
		i++;
		j--;
	}
}
