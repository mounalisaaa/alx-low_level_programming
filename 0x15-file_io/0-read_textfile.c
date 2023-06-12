#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the STDOUT.
 * @filename: filename.
 * @letters: the num of letter should be read and printed.
 * Return: num of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char *) * (letters));
	if (!buffer)
		return (0);

	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_read == -1 || bytes_written == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_read);
}
