#include "main.h"
/**
  * print_last_digit -  function that prints the last digit of a number..
  *  @n: int type number
  * Return: the last digit
  */
int print_last_digit(int n)
{
	int m = n % 10;

	_putchar(m + '0');
	return (m);
}
