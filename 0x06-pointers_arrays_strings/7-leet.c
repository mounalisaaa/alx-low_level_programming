#include "main.h"

char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *leets = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leets[j];
				break;
			}
		}
	}
	return (str);
}
