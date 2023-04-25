#include<stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)
{
    print_alphabet();
	return(0);
}
void print_alphabet(void)
{
	int alphabet;
	for(alphabet='a';alphabet<= 'z'; alphabet++ )
	{
		putchar(alphabet);
	}
	putchar('\n');
}
