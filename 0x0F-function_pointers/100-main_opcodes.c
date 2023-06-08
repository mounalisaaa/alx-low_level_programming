#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *@argc: argc.
 *@argv: argv.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int a;
	int (*main_ptr)() = &main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < a; i++)
	{
		printf("%02x", *((unsigned char *)main_ptr + i));
		if (i + 1 < a)
			printf(" ");
	}
	printf("\n");
	return (0);
}
