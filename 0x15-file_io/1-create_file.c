#include "main.h"

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file (can be NULL).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0;

	int _open, _write;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}

	}
	_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	_write = write(_open, text_content, len);

	if (_open == -1 || _write == -1)
		return (-1);

	close(_open);

	return (1);
}
