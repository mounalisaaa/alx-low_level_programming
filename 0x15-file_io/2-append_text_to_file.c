#include "main.h"
int _strlen(char *str);
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
