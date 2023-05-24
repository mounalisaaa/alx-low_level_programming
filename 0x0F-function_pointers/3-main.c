#include "3-calc.h"
/**
 * main - check the code
 *@argv: num of arguments.
 *@argc: argv.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*op)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	printf("%d\n", op(num1, num2));

	return (0);
}
