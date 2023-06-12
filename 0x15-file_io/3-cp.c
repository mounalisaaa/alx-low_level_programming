#include "main.h"
void _close(int fd);
void cp_file(const char *file_from, const char *file_to);
/**
 * main - main fuunction
 * @argc: count of args.
 * @argv: string of args
 * Return: 0.
 */
int main(int argc, char **argv)
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(argv[1], argv[2]);
	return (0);
}
/**
 * cp_file - copy the contant of argv[1] to argv[2].
 * @file_from: argv[1].
 * @file_to: argv[2].
 */
void cp_file(const char *file_from, const char *file_to)
{
	int to, from;
	ssize_t written, readd;
	char *buffer;

	from = open(file_from, O_RDONLY);
	to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buffer = malloc(sizeof(char *) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	readd = read(from, buffer, 1024);
	do {
		if (from == -1 || readd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			free(buffer);
			exit(98);
		}

		written = write(to, buffer, readd);
		if (to == -1 || written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buffer);
			exit(99);
		}

		readd = read(from, buffer, 1024);
		to = open(file_to, O_WRONLY | O_APPEND);

	} while (readd > 0);
	free(buffer);
	_close(to);
	_close(from);
}
/**
 * _close - close();
 * @fd: file descriptor.
 */
void _close(int fd)
{
	/*close(fd);*/
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
