#include "main.h"
/**
  * more_numbers - print 10 lines of 1-14
  * Description: desc
  * Return: void
  */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
	}
}
