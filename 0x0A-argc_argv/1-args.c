#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: int.
 * @argv: arr to str.
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
