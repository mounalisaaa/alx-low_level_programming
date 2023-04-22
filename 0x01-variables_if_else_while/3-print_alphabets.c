#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char alphabet_lower = 'a';
char ALPHABET = 'A';
while (alphabet <= 'z')
{
	putchar(alphabet);
	alphabet++;
}
while (ALPHABET <= 'Z')
{
	putchar(ALPHABET);
	ALPHABET++;
}
putchar('\n');
return (0);
}
