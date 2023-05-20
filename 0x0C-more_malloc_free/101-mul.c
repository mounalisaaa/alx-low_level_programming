#include "main.h"
#include <unistd.h>
int _atoi(char *s);
int _isdigit(int c);
int is_numeric(char *str);
void putint(int n);
unsigned long multiply(unsigned int *num1, unsigned int *num2);
/**
 * main - multiplies two positive numbers.
 * @argc: number of command line arguments.
 * @argv: arr of str that contains the arguments.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	unsigned int *num1, *num2;
	unsigned long mul;

	if (argc != 3 || !is_numeric(argv[1]) || !is_numeric(argv[2]))
	{
		write(1, "Error\n", 7);
		exit(98);
	}
	num1 = malloc(sizeof(unsigned int));
	num2 = malloc(sizeof(unsigned int));
	if (num1 == NULL || num2 == NULL)

	{
		write(1, "Error\n", 7);
		free(num1);
		free(num2);
		exit(98);
	}
	*num1 = _atoi(argv[1]);
	*num2 = _atoi(argv[2]);
	mul = multiply(num1, num2);
	putint(mul);
	_putchar('\n');

	free(num1);
	free(num2);

	return (0);
}

/**
 * is_numeric - function to check if a string is composed only of digits
 * @str: ptr to string.
 * Return: 1 or 0.
 */
int is_numeric(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!_isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * _atoi - convert str to int
 * @s: the string
 *
 * Return: the number in integer
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int i = 0;
	int sign = 1;

	while (*(s + i))
	{
		if (*(s + i) == '-')
			sign *= -1;
		else if (*(s + i) >= '0' && *(s + i) <= '9')
			num = (num * 10) + (*(s + i) - '0');
		else if (num > 0)
			break;
		i++;
	}
	return (num * sign);
}
/**
 * _isdigit - return 1 if the character is a digit, and 0 otherwise.
 * @c: the number to be checked
 * Return: Always 1 for true and 0 for false.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * putint - print integer using putchar.
 * @n: integer.
 *
 */
void putint(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		putint(n / 10);
	}
	_putchar(n % 10 + '0');
}
/**
 *  multiply - function to multiply two numbers
 *@num1: ptr to num1.
 *@num2: ptr to num2.
 *Return: mul.
 */
unsigned long multiply(unsigned int *num1, unsigned int *num2)
{
	return ((*num1) * (*num2));
}
