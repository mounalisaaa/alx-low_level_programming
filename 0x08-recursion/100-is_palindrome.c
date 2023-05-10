#include "main.h"
int check_palindrome(char *s, int left, int right);
int _strlen_palindrome(char *s);
/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 *  and return 0 if not.
 * @s: string.
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, _strlen_palindrome(s) - 1));
}
/**
 * check_palindrome - helper function
 * @s: string.
 * @left: var.
 * @right: var
 * Return: 0 or 1.
 */
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] != s[right])
	{
		return (0);
	}
	return (check_palindrome(s, left + 1, right - 1));
}
/**
 * _strlen_palindrome - calculate str len
 * @s: string
 * Return: length.
 */
int _strlen_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_palindrome(s + 1));
}
