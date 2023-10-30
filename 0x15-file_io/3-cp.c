#include "main.h"

/**
 * create_buffer - creates a buffer of 1024 bytes
 * @file: the name of the file to write to
 * Return: buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes a file
 * @fd: the file descriptor to close
 * Return: Void
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of one file to another
 * @argc: the number of arguments
 * @argv: an array containing the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int from, to;
	int _read, _write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	_read = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (_read > 0)
	{
		_write = write(to, buffer, _read);
		if (to == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		_read = read(from, buffer, 1024);
	}

	if (from == -1 || _read == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
