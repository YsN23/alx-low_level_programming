#include "main.h"

/**
 * read_textfile - Reads a text file and writes
 * its contents to standard output.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read and write.
 * Return: The actual number of letters read and written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _open, _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	_open = open(filename, O_RDONLY);
	_read = read(_open, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, read);

	if (_open == -1 || _read == -1 || _write == -1 || _write != _read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(_open);

	return (_write);
}
