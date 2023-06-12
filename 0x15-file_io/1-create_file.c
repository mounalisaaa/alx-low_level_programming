#include "main.h"
int _strlen(char *str);
/**
 * create_file - function that creates a file.
 * @filename: name of the file.
 * @text_content: what to write in the file.
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	ssize_t bytes_written;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content)
		len = _strlen(text_content);

	bytes_written = write(fd, text_content, len);
	if (fd == -1 || bytes_written == -1)
		return (-1);

	close(fd);
	return (1);
}
/**
 * _strlen - strlen().
 * @str: string.
 * Return: lenght.
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
