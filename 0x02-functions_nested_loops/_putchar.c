#include<unistd.h>
/**
 * main - _putchar
 * 
 * Return: 0
*/
int _putchar(char c)
{
	return(write(1,&c,1));
}
